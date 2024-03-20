class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight

    def eat(self):
        print('vat,mangso,polu,korma')

    def exersice(self):
        raise NotImplementedError
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight,team) -> None:
        self.team=team
        super().__init__(name, age, height, weight)

    #override 
    def eat(self):
        print('vegetable')
        # return super().exersice()

    def exersice(self):
        print("gym a poisa hudai ghem jorai")
        
        # return super().exersice()    

    
sakib=Cricketer('sakib',38,68,91,'BD')
sakib.eat()
# sakib.exersice() error