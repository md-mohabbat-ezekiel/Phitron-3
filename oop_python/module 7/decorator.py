import math
def timer(func):
    def inner(*args,**kwargs):
        print('time started')
        # print(func)
        func(*args,**kwargs)
        print('time ended')
    return inner
# timer()()
@timer
def get_factorial(n):
    print('factorial starting')
    result=math.factorial(n)
    print(f'factoral of {n} is: {result}')
get_factorial(n=5)

# vajilla decoretor
# timer(get_factorial)()  



