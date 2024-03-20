def full_name(first,last):
    name=f'full name is: {first} {last}'
    return name
# take paremeter in order(serial wise)
# name=full_name('alu','kodu')
name=full_name (last='kodu',first='alu')
print(name)

# def famous(**kargs)
def famous_name(first,last,title,*addition):
    name=f'{first} {last}'
    # print(addition['title'])
    for key,value in addition.item():
        print(key,value) 
    return name

name= famous_name(first='taher',last='ali',title='hujur',addition='taheri')
print(name)

#def function_name(num1,num2,*args,**kargs):

# return multiple thing from an array
def a_lot(num1,num2):
    sum=num1+num2
    mult=num1*num2
    remain=num1-num2
    return [sum,mult,remain]
    return sum,mult,remain
everything=a_lot(55,21)
print(everything)



# **kwargs (Keyword Arguments):
# The **kwargs syntax allows a function to accept a variable number of keyword arguments (i.e., named arguments).
# When you use **kwargs in a function definition, it collects all the keyword arguments passed to the function into a dictionary.

def print_kwargs(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_kwargs(name="Alice", age=30, city="Wonderland")
# name: Alice
# age: 30
# city: Wonderland
