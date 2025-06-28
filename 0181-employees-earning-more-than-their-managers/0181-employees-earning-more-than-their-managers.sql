# Write your MySQL query statement below
SELECT e.name As Employee
FROM Employee e
LEFT JOIN Employee m ON e.managerID = m.id
where e.salary > m.salary