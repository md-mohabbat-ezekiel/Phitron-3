use dummydb;

select job_id, count(*) from employees
group by job_id;




create database dummy;

use dummy;

create table Employees
(
    first_name varchar(50) not null,
    last_name varchar(50) not null,
    dob date not null,
    department_id int check(department_id > 0),
    salary int check(salary > 0)
);

create table Departments
(
    department_id int not null,
    department_name varchar(100) not null
);




use dummydb;

select departments.department_name, avg(salary)
from departments join employees on departments.department_id = employees.department_id
group by employees.department_id






use dummydb;

select departments.DEPARTMENT_NAME
from Departments left join Employees on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;




use dummydb;

select first_name from employees
where salary < (select salary from employees where first_name  = 'Steven' limit 1);





use dummydb;

select max(salary) from Employees
where salary < (select max(salary) from Employees);





use dummydb;

-- employee details of the employees who get less salary than a certain employee

select * from Employees
where SALARY < (select SALARY from Employees where Employee_ID = 144);




use dummydb;

--show departments where there are no employees with left join
select departments.DEPARTMENT_NAME
from Departments left join Employees on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;

-- show departments where there are no employees with right join
select departments.DEPARTMENT_NAME
from Employees right join Departments on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;

-- hide departments which does not have employees with inner join
select departments.DEPARTMENT_NAME
from Employees inner join Departments on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
group by Employees.department_id;




