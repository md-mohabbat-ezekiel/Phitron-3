from django.contrib import admin
from django.urls import path, include
from core.views import HomePageView

urlpatterns = [
    path('admin/', admin.site.urls),
    path("", HomePageView.as_view(), name="home"),
    path("accounts/", include("accounts.urls")),
    path("transactions/", include("transactions.urls")),
]
