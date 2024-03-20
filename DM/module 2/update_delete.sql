use programmingHero;
create table Student(
        roll char(4) primary key,
        Name varchar(50),
        Marks DOUBLE
);
insert into Student
(Roll,Name,Marks) values(1,'rahim',90) 

SET SQL_SAFE_UPDATES=0;
update Student
SET Name ='RISHIK KUMER PAUL'
where roll=3;
SET SQL_SAFE_UPDATES=1;

SET SQL_SAFE_UPDATES=0;
delete from Student
where roll =1

drop table Student




