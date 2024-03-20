class User:
    def __init__(self,name,age,money) -> None:
        self._name=name
        self.age=age
        self.money=money
    
    @property
    def age(self):
        return self._age
    @property
    def salary(self):
        return self._money
    
samsu=User('kopa',21,12000)
print(samsu.__money)
print(samsu.age())#before property as function
print(samsu.age) #property
print(samsu.salary())

