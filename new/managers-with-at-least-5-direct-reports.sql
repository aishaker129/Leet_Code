// Problem Link: https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/?envType=study-plan-v2&envId=top-sql-50

select e.name from employee e
inner join employee m
on e.id = m.managerId
group by m.managerId
having count(m.managerId) >= 5;

