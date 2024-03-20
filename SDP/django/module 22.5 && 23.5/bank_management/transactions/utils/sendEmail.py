from django.core.mail import EmailMultiAlternatives
from django.template.loader import render_to_string


def send_transaction_emails(user, to_user, subject, content):
    mail_subject = subject
    message = render_to_string('transactions/transaction_mail_template.html', {
        'user': user,
        'content': content
    })
    if to_user != None:
        to_email = to_user
    else:
        to_email = user.email

    send_mail = EmailMultiAlternatives(mail_subject, '', to=[to_email])
    send_mail.attach_alternative(message, "text/html")
    send_mail.send()
