from django.contrib import admin
from .models import UserAddressModel, UserBankAccountModel
# Register your models here.
admin.site.register(UserBankAccountModel)
admin.site.register(UserAddressModel)
