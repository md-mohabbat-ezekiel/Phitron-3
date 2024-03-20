class Student:
    def __init__(self,name,cls,id):
        self.name=name
        self.id=id
        self.cls=cls
    
    def __repr__(self) -> str:
        return f'Student name:{self.name},class:{self.cls},id:{self.id}'
    

ali=Student('ali hasan',9,1)
print(ali)        