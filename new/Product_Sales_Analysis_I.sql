// Problem Link: https://leetcode.com/problems/product-sales-analysis-i/description/?envType=study-plan-v2&envId=top-sql-50

select p.product_name, s.year, s.price
from Sales as s
left join Product as p
on s.product_id = p.product_id;
