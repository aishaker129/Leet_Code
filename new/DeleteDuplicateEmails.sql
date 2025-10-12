# problem link: https://leetcode.com/problems/delete-duplicate-emails/description/

delete p from person person
join person p1
on person.email = p1.email
and person.id < p1.id;