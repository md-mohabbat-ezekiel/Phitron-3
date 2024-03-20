#Ena poribohon

class Company:
    def __init__(self,name,address):
        self.name=name
        self.bus=[]
        self.routes=[]
        self.drivers=[]
        self.counter=[]
        self.manager=[]
        self.supervisors=[]
        self.fare=[]
class Driver:
    def __init__(self,name,license,age):
        self.license=license
        self.name=name
        self.age=age

class Counter:
    def __init__(self) -> None:
        pass
    def purchase_a_ticket(self,start,destination):
        pass

class Passenger:
    pass

lal_mia=Driver('a',123,22)


            