-- Write your PostgreSQL query statement below
SELECT p.product_name,
s.year,
s.price
from Sales s
join product p
on s.product_id=p.product_id;
