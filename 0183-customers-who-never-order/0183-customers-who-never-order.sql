/* Write your PL/SQL query statement below */

SELECT name AS Customers FROM Customers LEFT JOIN Orders ON Customers.id = Orders .customerId WHERE customerId IS NULL; 