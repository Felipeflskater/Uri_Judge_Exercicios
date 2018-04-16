select p.name,f.name,p.price from products p,categories c,providers f where 
p.id_categories = c.id and p.id_providers= f.id and p.price > 1000 and c.name ilike '%Super Luxury%'