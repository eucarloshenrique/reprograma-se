const prompt = require('prompt-sync')();
var array_obras = [];

do {
  /*
    Para essa atividade o tema escolhido foi: Quadros para decoração. 
    Que aqui tratei como obras de arte.
    Tendo como característias:
    Código da obra, Nome do artista, Ano, Largura e Altura da obra.
  */
  console.log("Sistema de Cadastro de obras artisticas");
  console.log("1 - Inserir Obras");
  console.log("2 - Excluir Obras");
  console.log("3 - Listar Obras");
  console.log("0 - Sair");

  var opcao = prompt("Digite sua opção: ");

  if (opcao == 1) {
    console.log("\n\nInserindo Cliente...\n");
    let codigo = parseInt(prompt("Digite o código: "));
    let artista = prompt("Digite o nome do artista: ");
    let ano = prompt("Digite o ano da obra: ");
    let largura = prompt("Digite a largura do quadro: ");
    let altura = prompt("Digite a altura da quadro: ");

    // Neste trecho estamos declarando um objeto
    const obra = {
      codigo: codigo,
      artista: artista,
      ano: ano,
      largura: largura,
      altura: altura
    }
    // Chamar a função inserir
    inserir_obras(obra) //Chamada da função inserir
    
  } else if (opcao == 2) {
    console.log("\n\nExcluindo Obras...\n");
    let codigo = prompt("Digite o código da obra: ");
    // Chamar a função excluir
     excluir_obras(codigo) //Chamada da função excluir
    
  } else if (opcao == 3) {
    console.log("\n\nListando Obras...\n");
    // Chamar a função listar
     listar_obras() //Chamada da função listar
    
  } else {
    console.log("\n\nSaindo do programa...\n");
  }

  prompt("\nEnter para continuar...");
  console.clear();
} while (opcao != 0)


function inserir_obras(obra) {
  // Implementar corpo da função
  array_obras.unshift(obra); //Utilizando o método unshift para a inclusão no array.
}

function excluir_obras(codigo) {
  // Implementar corpo da função
  var aux; //Variável para guardar o valor de quando alguma obra for excluída.
   for (var i=0; i<array_obras.length; i++){
     if (array_obras[i].codigo == codigo){
       aux = array_obras.splice(i,1); //Guardando o resultado da exclusão se houver.
       console.log("Obra excluída com sucesso.")
     }
   }
   if (aux == null){ //Teste para saber se algo foi excluído.
        console.log("Código não existe, obra não excluída."); /*Caso não haja exclusão informa ao usuário que o código digitado está incorreto. E portanto nada foi excluído.*/
      }
}

function listar_obras() {
  // Implementar corpo da função
  for (var i=0; i<array_obras.length; i++){ //Percorre o array para imprimir na tela todos os valores.
  console.log(array_obras[i].codigo,": ",array_obras[i].artista,"-",array_obras[i].ano,"-",array_obras[i].largura,"-",array_obras[i].altura);
  }
}


