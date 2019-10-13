
insert into Cliente(CodCliente,NomeCli,Bairro,Cidade,Email,LimiteCompra,Telefone) values(1,'Jose Carlos','Boa Viagem','Recife','Jose@gmail.com',10000.00,'999999')
insert into Cliente(CodCliente,NomeCli,Bairro,Cidade,Email,LimiteCompra,Telefone) values(2,'Maria Clara','Boa Viagem','Recife','Maria@gmail.com',5000.00,'888888')
insert into Cliente(CodCliente,NomeCli,Bairro,Cidade,Email,LimiteCompra,Telefone) values(3,'Angela Maria','Paulista','Olinda','Angela@gmail.com',12000.00,'777777')
insert into Cliente(CodCliente,NomeCli,Bairro,Cidade,Email,LimiteCompra,Telefone) values(4,'Maria Jose','Paulista','Olinda','MariaJ@gmail.com',15000.00,'666666')

insert into Fornecedor(CodFornecedor,NomeFornecedor,Email,Telefone) values (1,'Dell','Dell@gmail.com','888888')
insert into Fornecedor(CodFornecedor,NomeFornecedor,Email,Telefone) values (2,'Nagem','Nagem@gmail.com','22222')
insert into Fornecedor(CodFornecedor,NomeFornecedor,Email,Telefone) values (3,'Samsung','Samsung@gmail.com','33333')

insert into Produto(CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco) values (1,1,'Notebook','UN',10,3500.00)
insert into Produto(CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco) values (2,2,'Mouse','UN',20,100.00)
insert into Produto(CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco) values (3,3,'TV','UN',15,5000.00)
insert into Produto(CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco) values (4,2,'Bateria','CX',10,500.00)
insert into Produto(CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco) values (5,2,'Pinceis','CX',30,120.00)

insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (1,1,1,2,0.00,'Cartão')
insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (2,2,1,1,0.00,'A vista')
insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (3,1,2,3,0.00,'Parcelado')
insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (4,3,4,2,0.00,'Parcelado')
insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (5,4,3,5,0.00,'A vista')
insert into Vendas(CodVenda,CodCliente,CodProduto,Quantidade,ValorTotal,FormaPagto) values (6,2,4,2,0.00,'Cartão')
