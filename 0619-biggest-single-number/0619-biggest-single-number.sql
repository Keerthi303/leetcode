/* Write your PL/SQL query statement below */
select max(num) as num from (SELECT num  from MyNumbers
group by num 
having count(num) = 1);