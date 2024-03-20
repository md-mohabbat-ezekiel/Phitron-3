use progarmminghero;

CREATE TABLE  Student
(
   Roll CHAR(4) PRIMARY KEY,
   Name  VARCHAR(50) NOT NULL,
   Email VARCHAR(50) UNIQUE,
   address VARCHAR(255),
   age INT CHECK(age>10)
);

INSERT INTO Student(Roll,name,Email,address,age) values('0001','mohabbat','mdmohabbat@.com','bogura',12);

INSERT INTO Student(Roll,name,Email,address,age) values('0002','mohabbat','mdmohabat@.com','bogura',911);

INSERT INTO Student(Roll,name,Email,address,age) values('0003','mohabbat','mdmoabbat@.com','bogura',13);

CREATE TABLE  Student
(
   Roll CHAR(4),
   Name VARCHAR(50) NOT NULL,
   Email VARCHAR(50),
   address VARCHAR(255),
   age INT,
   PRIMARY KEY(Roll),
   UNIQUE(Email),
   CHECK(age > 10)
);


CREATE TABLE  Student
(
   Roll CHAR(4),
   Name VARCHAR(50) NOT NULL,
   Email VARCHAR(50),
   addressVARCHAR(255),
   age INT,
    constraint PRIMARY KEY(Roll),
    constraint UNIQUE(Email),
    constraint CHECK(age > 10)
);


CREATE TABLE  Student
(
   Roll CHAR(4),
   Name VARCHAR(50) NOT NULL,
   Email VARCHAR(50),
   address VARCHAR(255),
   age INT,
    constraint pk_rule PRIMARY KEY(Roll),
    constraint unique_rule UNIQUE(Email),
    constraint checking_rule CHECK(age > 10)
);



CREATE TABLE Library
(
  BookName VARCHAR(50) PRIMARY KEY,
  WhoHired_ROll CHAR(4),
  FOREIGN KEY (WhoHired_ROll) REFERENCES Student(roll)
);




