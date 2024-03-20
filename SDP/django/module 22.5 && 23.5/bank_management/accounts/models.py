from django.db import models
from django.contrib.auth.models import User
from .constants import ACCOUNT_TYPES, GENDER_TYPES
# Create your models here.


class UserBankAccountModel(models.Model):
    account = models.OneToOneField(
        User, related_name="account", on_delete=models.CASCADE)
    account_type = models.CharField(choices=ACCOUNT_TYPES, max_length=10)
    account_no = models.IntegerField(unique=True)
    birth_date = models.DateField(null=True, blank=True)
    gender = models.CharField(choices=GENDER_TYPES, max_length=10)
    balance = models.DecimalField(max_digits=12, default=0, decimal_places=2)
    isBankrupt = models.BooleanField(default=False)

    def __str__(self) -> str:
        return str(self.account_no)


class UserAddressModel(models.Model):
    user = models.OneToOneField(
        User, related_name="address", on_delete=models.CASCADE)
    street_address = models.CharField(max_length=100)
    city = models.CharField(max_length=100)
    postal_code = models.IntegerField()
    country = models.CharField(max_length=100)

    def __str__(self) -> str:
        return self.user.email
