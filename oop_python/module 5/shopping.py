class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)

    def remove_item(self, item_name):
        for item in self.cart:
            if item['item'] == item_name:
                self.cart.remove(item)
                print(f"{item_name} removed from the cart.")
                return
        print(f"{item_name} not found in the cart.")

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            total += item['price'] * item['quantity']
        print('Total price:', total)
        if amount < total:
            print(f'Please provide {total - amount} more.')
        else:
            extra = amount - total
            print(f'Here are your items and extra money: {extra}')
            self.cart.clear()

ezekiel = Shopping("Ezekiel")
ezekiel.add_to_cart('alu', 50, 6)
ezekiel.add_to_cart('dim', 50, 6)
ezekiel.add_to_cart('rice', 50, 6)
print(ezekiel.cart)

ezekiel.checkout(600)

# [{'item': 'alu', 'price': 50, 'quantity': 6}, {'item': 'dim', 'price': 50, 'quantity': 6}, {'item': 'rice', 'price': 50, 'quantity': 6}]  
# Total price: 900
# Please provide 300 more.