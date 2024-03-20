from school import School,ClassRoom
from person import  Student

def main():
    school=School('adamjee','uttra')
    eight=ClassRoom('eight')
    school.add_classroom(eight)
    nine=ClassRoom('nine')
    school.add_classroom(nine)
    ten=ClassRoom('ten')
    school.add_classroom(ten)
    
    abul=Student('Abir khan',eight)
    school.student_admission(abul)



if __name__ == '__main__':
    main()

    
