use dummybd;
SELECT MAX(SALARY)
FROM EMPLOYEES;

SELECT MIN(SALARY)
FROM EMPLOYEES;

SELECT AVG(SALARY)
FROM EMPLOYEES;

SELECT COUNT(SALARY)
FROM EMPLOYEES;

SELECT DEPARTMENT_ID, MAX(SALARY)
FROM EMPLOYEES
WHERE DEPARTMENT_ID !=20
--WHERE CONDITION ON TABLE-- 
GROUP BY DEPARTMENT_ID
HAVING MAX(SALARY) >5000;
--HAVING CONDITION ON QUERY-- 

 


