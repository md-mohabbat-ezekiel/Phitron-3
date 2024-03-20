from math import pi
class Shap:
    def __init__(self,name) -> None:
        self.name=name

class Rectangle(Shap):
    def __init__(self, name,length,width) -> None:
        self.length=length
        self.width=width
        super().__init__(name)

    def area(self):
        return self.length*self.width
    

class Circle(Shap):
    def __init_(self,name,radius)->None:
        self.radius=radius
        super().__init__(name)
    
    def area(self):
        return pi * self.radius*self.radius


