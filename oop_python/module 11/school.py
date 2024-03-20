class School:
    def __init__(self,name,address) -> None:
        self.name=name
        self.address=address
        self.teacher={}
        # classroom
        self.classrooms= {}

    def add_classroom(self,classroom):
        self.classrooms[classroom.name]=classroom

    def add_teacher(self,subj,teacher):
        if subj in self.teacher:
            self.teacher[subj]=teacher



    def student_admission(self,student):
        className=student.classroom.name
        if className in self.classrooms:
            # TODO : set student id,(roll num) at the time of adding the student 
            self.classrooms[className].add_student(student)
        else:
            print(f'NO classroom as named {className}')
    
    def __repr__(self) -> str:
        print('-----------all classroom-------')
        for key,value in self.classrooms.items():
            print(key)

        print('-------Students-------') 
        eight=self.classrooms['eight']
        print(len(eight.students))

        return ''    


class ClassRoom:
    def __init__(self,name) -> None:
        self.name=name
        #composition
        self.students=[]
        self.subj=[]

    def add_student(self,student):
        serial_id= f'{self.name}--{(self.student)+1}'
        student.id=serial_id
        student.classroom=self.name
        self.students.append(student)

    def __str__(self) -> str:
        return f'{self.name}--{len(self.students)}'
    
    # TODO: sort students by grade
    def get_top_studnets(self):
        pass



