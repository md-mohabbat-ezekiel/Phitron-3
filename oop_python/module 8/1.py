class Star_Cinema:
    hall_list = []

    @classmethod
    def entry_hall(cls, hall_object):
        if isinstance(hall_object, Hall):
            cls.hall_list.append(hall_object)
            print(f"Hall '{hall_object.name}' added to the hall list.")
        else:
            print("Invalid input. Please provide an object of class 'Hall'.")

class Hall:
    def __init__(self, name, capacity):
        self.name = name
        self.capacity = capacity

# Usage example:
hall1 = Hall("Hall 1", 100)
hall2 = Hall("Hall 2", 150)

Star_Cinema.entry_hall(hall1)
Star_Cinema.entry_hall(hall2)

print("Hall List:")
for hall in Star_Cinema.hall_list:
    print(f"Name: {hall.name}, Capacity: {hall.capacity}")
