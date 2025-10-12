# problem link: https://leetcode.com/problems/nth-highest-salary/description/

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set n = N-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct(salary)  from employee
      order by salary desc LIMIT 1 OFFSET n
  );
END