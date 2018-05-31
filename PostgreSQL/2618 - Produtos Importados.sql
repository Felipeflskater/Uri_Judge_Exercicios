select pr.name,po.name,c.name from products pr,providers po,categories c 
where 
pr.id_providers = po.id and pr.id_categories = c.id and
c.name ilike '%Imported%' and po.name ilike '%Sansul SA%'