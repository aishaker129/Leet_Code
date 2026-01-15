// problem link: https://leetcode.com/problems/classes-with-at-least-5-students/description/?source=submission-ac

select class from Courses
group by class
having count(student) > 4;
