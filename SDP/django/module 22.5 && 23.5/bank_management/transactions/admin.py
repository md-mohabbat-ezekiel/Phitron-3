from typing import Any
from django.contrib import admin
from .models import TransactionModel, MoneyTransferModel
from .utils.sendEmail import send_transaction_emails

admin.site.register(MoneyTransferModel)


@admin.register(TransactionModel)
class TransactionModelAdmin(admin.ModelAdmin):
    list_display = ['account', 'amount', 'balance_after_transaction',
                    'transaction_type', 'loan_approve']

    def save_model(self, request: Any, obj: Any, form: Any, change: Any) -> None:
        if obj.loan_approve:
            obj.account.balance += obj.amount
            obj.balance_after_transaction = obj.account.balance
            obj.account.save()

            send_transaction_emails(
                obj.account.account,
                None, f"""Loan request has
                been approved for A/C
                {obj.account.account_no}""",
                f"""Your Loan request for ${obj.amount} has successfully approved by the admin.And your current balance is ${obj.account.balance}""")

        return super().save_model(request, obj, form, change)
