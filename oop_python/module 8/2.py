class Star_Cinema:
    hall_list = []

    @classmethod
    def add_hall(cls, hall):
        if isinstance(hall, Hall):
            cls.hall_list.append(hall)
            print(f"Hall '{hall.hall_no}' added to the hall list.")
        else:
            print("Invalid.provide object of class 'Hall'.")

class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.seats = {} 
        self.show_list = []
        self.rows=rows  
        self.cols = cols
        self.hall_no = hall_no
        self.entry_hall()

    def entry_hall(self):
        self.add_hall(self)

hall1 = Hall(rows=5, cols=10, hall_no=1)
hall2 = Hall(rows=6, cols=12, hall_no=2)

print("Hall List:")
for hall in Star_Cinema.hall_list:
    print(f"Hall No: {hall.hall_no}, Rows: {hall.rows}, Columns: {hall.cols}")



# Make a class named Hall which will have 5 instance attributes given below	
# seats which is an dictionary of seats information
# show_list which is an list of tuples
# rows which is the row of the seats in that hall
# cols which is the column of the seats in that hall
# hall_no which is the unique no. of that hall
# Initialize an object of class Hall with rows, cols and 
# hall_no. And insert that object to the Star_Cinema
# class attribute named hall_list inside the initializer using inheritance.
#  seats and show_list will be empty initially.