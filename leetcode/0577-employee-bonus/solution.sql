-- Write your PostgreSQL query statement below
SELECT 
 e.name,
b.bonus
from Employee e
LEFT JOIN Bonus b
on e.empID=b.empId
where bonus is null 
or bonus<1000;
