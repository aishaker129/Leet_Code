problem link:https://leetcode.com/problems/customers-who-never-order/description/

select name as customers
from customers
left join orders
on customers.id = orders.customersId
where orders.customersId in null;