
create table Cliente(
CodCliente int not null primary key,
NomeCli varchar(50) not null,
Bairro varchar(30) not null,
Cidade varchar(30) not null,
Email varchar(50) not null,
LimiteCompra numeric(18,2) not null,
Telefone varchar(20) not null)


create table Fornecedor(
CodFornecedor int not null primary key,
NomeFornecedor varchar(50) not null,
Email varchar(50) not null,	
Telefone varchar(20) not null)


create table Produto(
CodProduto int not null,
CodFornecedor int not null,
NomeProd varchar(50) not null,
UnidadeMed varchar(20) not null,
Quantidade int not null,
Preco numeric(18,2) not null,
constraint pkCodProduto primary key (CodProduto),
constraint fkCodFornecedor foreign key (CodFornecedor) references Fornecedor,)


create table Vendas(
CodVenda int not null,
CodCliente int not null,
CodProduto int not null,
Quantidade int not null,
ValorTotal  numeric(18,2) not null,
FormaPagto varchar(30) not null,
constraint pkCodVendas primary key (CodVenda,CodCliente,CodProduto),
constraint fkCodCliente foreign key (CodCliente) references Cliente,
constraint fkCodProduto foreign key (CodProduto) references Produto)
