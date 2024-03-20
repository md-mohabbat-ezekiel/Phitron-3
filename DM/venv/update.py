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
         UPDATE Student
         SET Name ='kep'
         WHERE Name='mohabbat'
         """
mycursor.execute(sqlquery)
mydbconnection.commit()
print("update table successful")
