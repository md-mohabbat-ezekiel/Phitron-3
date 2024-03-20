class Family:
    def __init__(self,adress) -> None:
        self.address=adress

class School:
    def __init__(self,id,level) -> None:
        self.id=id
        self.level=level

class Sports:
    def __init__(self,game) -> None:
        self.game=game

class Student(False,School,Sports):
    def __init__(self,address,id,level,game) ->None:
        School.__init__(self,id,level)
        Sports.__init__(self,game)
        Family.__init__(self,address)
        super().__init__(address)
        



        
