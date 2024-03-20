from abc import ABC,abstractmethod
#abstract base class
class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat method

    def eat(self):
        print('hey banana')
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self,name) -> None:
        self.category='Monkey'
        self.name=name
        super().__init__()
    def eat(self):
        print('Hey nana,eating banana')
    def move(self):
        print('hanging on the branches')

lyka =Monkey('lucky')
lyka.eat()