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
          CREATE TABLE Student
          (
             Roll varchar(4),
             Name varchar(58)
            
          )
         """
mycursor.execute(sqlquery)
print(" Create table successful")
