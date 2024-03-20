import mysql.connector
mydbconnection=mysql.connector.connect(
host="localhost",
user="root",
passwd="#6a2b1c@",
)
print(mydbconnection)

db_name="python_test_bd"
mycursor=mydbconnection.cursor()
sqlquery="CREATE DATABASE " +db_name
mycursor.execute(sqlquery)
