from django.urls import path
from .views import DepositMoneyView, WithdrawView, LoanRequestView, TransactionReportView, LoanListView, PayLoanView, MoneyTransferView, MoneyTransferListView


urlpatterns = [
    path("deposit/", DepositMoneyView.as_view(), name="deposit"),
    path("withdraw/", WithdrawView.as_view(), name="withdraw"),
    path("loan-request/", LoanRequestView.as_view(), name="loan_request"),
    path("money-transfer/", MoneyTransferView.as_view(), name="money_transfer"),
    path("money-transfer-report/", MoneyTransferListView.as_view(),
         name="money_transfer_report"),
    path("loans/", LoanListView.as_view(), name="loan_list"),
    path("report/", TransactionReportView.as_view(),
         name="transaction_report"),
    path("loans/<int:loan_id>/", PayLoanView.as_view(), name="pay"),
]
