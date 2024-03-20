class Shopping:
    cart=[] #class atribute #static attribute
    origin='chaina'

    def __init__(self,name,location) -> None:
        self.name='jamuna city' #instance attribute
        self.location='jame er maj khane'

    def purchase(self,item,price,amount):
        remaining=amount-price
        print(f'buying:{item} for price: {price} and remaining {remaining})    
        
