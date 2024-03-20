from django.urls import path
from .views import UserSignupView, UserSignInView, UserLogoutView, UserProfileView, change_password

urlpatterns = [
    path("signup/", UserSignupView.as_view(), name="signup"),
    path("signin/", UserSignInView.as_view(), name="signin"),
    path("profile/", UserProfileView.as_view(), name="profile"),
    path("change-password/", change_password, name="change_pass"),
    path("logout/", UserLogoutView.as_view(), name="logout"),
]
