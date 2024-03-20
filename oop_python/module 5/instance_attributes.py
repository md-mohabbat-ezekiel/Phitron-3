class Shop:
    shopping_mall='Jumuna'
    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[] #cart is instance attribute

    def add_to_cart(self,item):
        self.cart.append(item)

mehmed=Shop('MEHMED')
mehmed.add_to_cart('shoes')
mehmed.add_to_cart('phone')
print(mehmed.cart) 

mohabbat=Shop('MOHABBAT')
mohabbat.add_to_cart('cap')
mohabbat.add_to_cart('watch')
print(mohabbat.cart)