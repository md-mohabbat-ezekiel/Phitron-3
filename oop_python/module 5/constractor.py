class Phone:
    manufactured='china'
    
    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price

    def send_sms(self,phone,sms):
        text=f'sending to: {phone} in text {sms}'
        print(text)
my_phone=Phone('mohabbat','oppo',9800)
print(my_phone.owner,my_phone.brand,my_phone.price)

her_phone=Phone('he','iphone',99900)
print(my_phone.owner,my_phone.brand,my_phone.price)

my_phone.send_sms()
her_phone.send_sms()
