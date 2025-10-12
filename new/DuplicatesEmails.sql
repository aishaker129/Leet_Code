problem link: https://leetcode.com/problems/duplicate-emails/description/

select email from person
group by email
having count(email)>1;