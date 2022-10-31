Select employee_id From
(SELECT A.employee_id FROM Employees A LEFT JOIN Salaries B ON A.employee_id = B.employee_id WHERE salary IS NULL)
UNION
(SELECT A.employee_id FROM Salaries A LEFT JOIN Employees B ON A.employee_id = B.employee_id WHERE name IS NULL)

ORDER BY employee_id