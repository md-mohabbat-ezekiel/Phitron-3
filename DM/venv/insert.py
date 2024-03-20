import mysql.connector

db_name="python_test_bd"

mydbconnection=mysql.connector.connect(
host="localhost",
user="root",
passwd="#6a2b1c@",
database=db_name
)

mycursor=mydbconnection.cursor()
sqlquery=""" 
          INSERT INTO Student(Roll,Name)
          VALUES('101','Mohabbat')
         """
mycursor.execute(sqlquery)
mydbconnection.commit()
print("Insert table successful")
