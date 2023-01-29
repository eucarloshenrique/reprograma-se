// Selecionar todos elementos da classe 'produto_preco'
var produto_precos = document.getElementsByClassName("produto_preco");


/*Teste manual para saber se realmente o primeiro e o último valor foram armazenados.
//document.write(produto_precos[0].innerText+'<br>');
//document.write(produto_precos[(produto_precos.length) - 1].innerText);
***/

// Implementar um comando de repetição para analisar o valor 'innerText' de cada um dos elementos e somá-los (lembre-se de converter o valor para float)
var soma_total = 0;

for (var i=0; i<produto_precos.length; i++){
  soma_total = soma_total + parseFloat(produto_precos[i].innerText);
}
// Escrever no conteúdo da página o valor da soma
document.write("Total: R$" + soma_total);