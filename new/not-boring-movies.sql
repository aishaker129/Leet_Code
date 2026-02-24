// problem link: https://leetcode.com/problems/not-boring-movies/description/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below

select id,movie,description,round(rating,2) as rating
from Cinema
where id % 2 = 1
and description <> 'boring'
order by rating desc;
