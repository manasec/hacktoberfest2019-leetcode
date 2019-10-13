create procedure PESCLIENTE(
@Codigo int)
as
begin
select NomeCLi,Cidade,Telefone,LimiteCompra from Cliente where CodCliente = @Codigo
end



create procedure CalProduto(
@MaiorPreco float output,
@MenorPreco float output,
@MediaPreco float output,
@SomaPreco float output)
as 
begin
select @MaiorPreco = MAX(Preco), @MenorPreco = MIN(Preco),@MediaPreco = AVG(Preco), @SomaPreco=SUM(Preco) from Produto
end



create procedure PesquisaProduto(
@NomeProduto as varchar(50)
)
as 
begin
select * from produto where NomeProd like @NomeProduto+'%'
end



