select c.name,o.id from customers c,orders o where c.id=o.id_customers and o.orders_date between '2016-01-01' and '2016-06-30' 