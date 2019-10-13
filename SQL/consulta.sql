select  CodProduto,CodFornecedor,NomeProd,UnidadeMed,Quantidade,Preco from where NomeProd like 'Note%'
select CodProduto,NomeProd,UnidadeMed,Quantidade,Preco, Preco*1.10 as ValorVenda from Produto
select NomeProd,Quantidade,Preco from Produto where (Preco> (select AVG(preco) as mediaPreco) from Produto
select NomeCli,Bairro,Cidade,LimiteCompra + LimiteCompra * 15/100 as LimiteAdicional from Cliente