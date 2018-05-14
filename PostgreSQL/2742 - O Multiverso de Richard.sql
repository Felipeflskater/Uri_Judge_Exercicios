select l.name,trunc(l.omega * 1.618,3) as Fator_N 
from dimensions d inner join life_registry l on d.id=l.dimensions_id
where d.name in ('C875','C774') and l.name ilike '%Richard%' order by Fator_N asc