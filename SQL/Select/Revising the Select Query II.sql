/*
Query the names of all American cities in CITY with populations larger than 120,000. The CountryCode for America is USA.
## Input Format
+-------------+--------------+
| Field       | Type         |
+-------------+--------------+
| ID          | NUMBER       |
| NAME        | VARCHAR2(17) |
| COUNTRYCODE | VARCHAR2(3)  |
| DISTRICT    | VARCHAR2(20) |
| POPULATION  | NUMBER       |
+-------------+--------------+
*/



SELECT name
FROM city
WHERE population > 120000
    AND countrycode = 'USA';
