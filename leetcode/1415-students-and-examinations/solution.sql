-- Write your PostgreSQL query statement below
select s.student_id,
s.student_name,
sub.subject_name,
COUNT(e.subject_name) as attended_exams
from Students as s
cross join Subjects as sub
left join Examinations as e
on e.student_id =s.student_id
and e.subject_name=sub.subject_name
GROUP BY
  s.student_id, s.student_name, sub.subject_name
order by s.student_id , sub.subject_name;
