SELECT Name
FROM STUDENTS
WHERE MARKS > 75
ORDER BY RIGHT(Name, 3), ID ASC;