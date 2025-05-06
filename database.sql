create database database
create table personal
(
    p_id int primary key identity(1,1),
    p_name varchar(20),
    p_sname varchar(20),
    p_job varchar(20),
    p_salary int
)
