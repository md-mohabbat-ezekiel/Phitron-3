class Animal:
    def __init__(self,name) -> None:
        self.name

    def make_sound(self):
        print('animal making some sound')

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)            
    
    def make_sound(self):
        print('meow meow')

class Dog(Animal):
    def __init__(self,name)->None:
        super().__init__(name)
    
    def make_sound(self):
        print('gheu gheu')

    
don=Cat('Real Don')
don.make_sound()

sheperd=Dog('local sheperd')
sheperd.make_sound()

animals=[don,sheperd]
for animal in animals:
    animal.make_sound()
    
