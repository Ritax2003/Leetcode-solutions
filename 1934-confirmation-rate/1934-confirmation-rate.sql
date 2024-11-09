# Write your MySQL query statement below
select s.user_id,
case
    when c.user_id is NULL then 0
    else round(sum(c.user_id=s.user_id and c.action='confirmed')/count(c.user_id=s.user_id),2)
end as confirmation_rate
from
    Signups s left join Confirmations c
on s.user_id = c.user_id
group by s.user_id;