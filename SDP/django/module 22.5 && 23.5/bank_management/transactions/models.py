from django.db import models
from accounts.models import UserBankAccountModel
# Create your models here.
from .constants import TRANSACTION_TYPE


class TransactionModel(models.Model):
    account = models.ForeignKey(
        UserBankAccountModel, related_name='transactions', on_delete=models.CASCADE)

    amount = models.DecimalField(decimal_places=2, max_digits=12)
    balance_after_transaction = models.DecimalField(
        decimal_places=2, max_digits=12)
    transaction_type = models.IntegerField(choices=TRANSACTION_TYPE, null=True)
    timestamp = models.DateTimeField(auto_now_add=True)
    loan_approve = models.BooleanField(default=False)

    class Meta:
        ordering = ['timestamp']


class MoneyTransferModel(models.Model):
    account = models.ForeignKey(
        UserBankAccountModel, related_name='transfers', on_delete=models.CASCADE)
    receiver = models.DecimalField(max_digits=12, decimal_places=0)
    balance_after_transaction = models.DecimalField(
        decimal_places=2, max_digits=12, null=True, blank=True)
    transaction_type = models.IntegerField(choices=TRANSACTION_TYPE, null=True)
    timestamp = models.DateTimeField(auto_now_add=True)
    amount = models.DecimalField(
        decimal_places=2, max_digits=12, null=True, blank=True)

    class Meta:
        ordering = ['timestamp']

    def __str__(self) -> str:
        return str(self.receiver)
