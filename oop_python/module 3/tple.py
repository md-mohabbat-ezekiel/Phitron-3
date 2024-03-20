def multiple():
    return 3,4

things='pen','tripod','water bottle'
print(type(things))
# result tuple
print(things[0])
print(things[-1])#index printing
print(things[1:2])

""" 
tuple immutable
things[0]='wagon'
print(things)
result garbeg
"""
print(len(things))# length given
mega=([2,3,4],[6,8,9,5])
print(type(mega))
print(mega[0]) #[2,3,4]
mega[0][1]=123
print(mega) #[2,123,4],[6,8,9,5]
