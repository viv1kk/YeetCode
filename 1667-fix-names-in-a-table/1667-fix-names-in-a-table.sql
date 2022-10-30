/* Write your PL/SQL query statement below */

Select user_id, Initcap(lower(name)) as "name" from Users order by user_id