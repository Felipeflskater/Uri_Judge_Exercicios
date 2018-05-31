select concat('Podium: ',team)  as name from league where position <=3
union all
select concat('Demoted: ',team) as name from league where position >= (select max(position)-1 from league)