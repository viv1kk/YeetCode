/* Write your PL/SQL query statement below */
SELECT name AS Customers FROM Customers A LEFT JOIN Orders B ON A.id = B.customerId Where customerId IS NULL