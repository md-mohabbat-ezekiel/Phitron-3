def sum(num1,num2,num3=0,num4=0,num5=0):
    result=num1+num2+num3+num4+num5
    return result
total=sum(99,11,5)
# print('total: ',total)
#args
def all_sum(num1,num2,*numbers):
    print(numbers)
    sum=0
    for num in numbers:
        print(num)
        sum+=num
    return sum    
total=all_sum(45,46,89,81,11,81)
print('all sum: ',total)  

def do_a_lot(*args):
    print(args)

# *args (Non-Keyword Arguments):
# The *args syntax allows a function to accept a variable number of non-keyworded arguments.
# When you use *args in a function definition, it collects all the positional arguments passed to the function into a tuple
# You can then iterate over this tuple or perform other operations on it.  

def my_function(*args):
    for arg in args:
        print(arg)

my_function(1, 2, 3, "hello")

# 1
# 2
# 3
# hello


