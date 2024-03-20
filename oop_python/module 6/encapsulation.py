# encapsulation -->hide details
# access modifier: public,protected,private
class Bank:
    def __init__(self,holder_name,initial_deposit) -> None:
        self.holder_name=holder_name #public attribute
        self.__branch='banani 11' #protected
        self.__balance=initial_deposit #private
    
    def deposit(self,amount):
        self.__balance +=amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self,amount):
        if amount<self.__balance:
            self._balance=self._balance-amount
            return amount
        else:
            return f'fokira tk nai'
        
            

rafsan =Bank('choto vai',10000)
print(rafsan.holder_name) 
rafsan.deposit(40000)
print(rafsan.get_balance)

print(rafsan._Bank_balance)
