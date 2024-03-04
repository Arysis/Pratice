SELECT CONCAT(Name,'(', LEFT(occupation, 1), ')')
FROM OCCUPATIONS
ORDER BY Name;
    
SELECT concat("There are a total of ",COUNT(occupation)," ", lower(occupation),"s.") 
FROM OCCUPATIONS 
group by occupation
order by COUNT(occupation) asc, occupation asc;