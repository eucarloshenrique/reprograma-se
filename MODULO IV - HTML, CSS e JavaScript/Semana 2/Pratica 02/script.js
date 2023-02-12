var cachorros = [{ "nome": "Thor", "imagem": "dog1" }, { "nome": "Zeca", "imagem": "dog2" }, { "nome": "Zeus", "imagem": "dog3" }, { "nome": "Pingo", "imagem": "dog4" }];

var gatos = [{ "nome": "Dunga", "imagem": "cat1" }, { "nome": "Mika", "imagem": "cat2" }, { "nome": "Conan", "imagem": "cat3" }, { "nome": "Messi", "imagem": "cat4" }];

// Selecionar elemento 'select_animais' ( 1 ponto)
var select_animais = document.getElementById('select_animais');
// Selecionar elemento 'container' ( 1 ponto)
var container = document.querySelector('#container');
// Selecionar elemento 'nome' ( 1 ponto)
var nome = document.getElementById('nome');

// Adicionar Listener 'input' ao elemento 'select_animais' (1 ponto)
select_animais.addEventListener('input', listarAnimais);

// Adicionar Listener 'mouseover' ao elemento 'container' (1 ponto)
container.addEventListener('mouseover', mostrarNome);

// Adicionar Listener 'mouseout' ao elemento 'container' (1 ponto)
container.addEventListener('mouseout', limparNome);

function listarAnimais() { // Implementação da função (10 pontos)
  limparDivContainer();
  // Implementar...
  //captura do valor armazenado na varial select com #id select_animais
  var animal = select_animais.value;
  var img1, img2, img3, img4

  if (animal == 'cat') {
    // Criar elementos do tipo <img src=./img/....
    img1 = document.createElement('img');
    img1.id = 'cat1'; //#id criado para posteriormente utilizar na seleção do nome.
    img1.src = 'img/cat1.jpg'; //Define o local da imagem 1 para o cat.

    img2 = document.createElement('img');
    img2.id = 'cat2';
    img2.src = 'img/cat2.jpg';

    img3 = document.createElement('img');
    img3.id = 'cat3';
    img3.src = 'img/cat3.jpg';

    img4 = document.createElement('img');
    img4.id = 'cat4';
    img4.src = 'img/cat4.jpg';

  } else {
    // Criar elementos do tipo <img src=./img/....
    img1 = document.createElement('img');
    img1.id = 'dog1'; //#id criado para posteriormente utilizar na selação do nome.
    img1.src = 'img/dog1.jpg'; //Define o local da imagem 1 para o dog.

    img2 = document.createElement('img');
    img2.id = 'dog2';
    img2.src = 'img/dog2.jpg';

    img3 = document.createElement('img');
    img3.id = 'dog3';
    img3.src = 'img/dog3.jpg';

    img4 = document.createElement('img');
    img4.id = 'dog4';
    img4.src = 'img/dog4.jpg';
  }
  // Fazer com que os elementos img sejam filhos do elemento 'container'
  container.appendChild(img1);
  container.appendChild(img2);
  container.appendChild(img3);
  container.appendChild(img4);
}

function mostrarNome(e) { // Implementação da função (4 pontos)
  // Implementar...
  var identificador = e.target.id; //Identificador utilizado para comparar com os nomes nos objetos.

  for (var i = 0; i < cachorros.length; i++) { //Percorre o array para encontrar o nome do objeto do target.
    if (cachorros[i].imagem == identificador) { //Com base no identificador procura a mesma imagem.
      nome.innerText = cachorros[i].nome; //Se ele encontra atribui o nome ao parágrafo.
    }
  }
  for (var i = 0; i < gatos.length; i++) { //Percorre o array para encontrar o nome do objeto do target.
    if (gatos[i].imagem == identificador) { //Com base no identificador procura a mesma imagem.
      nome.innerText = gatos[i].nome; //Se ele encontra atribui o nome ao parágrafo.
    }
  }
}
function limparNome() {
  nome.innerText = " ";
}

// Função para limpar as imagens antigas, antes de inserir novas imagens
function limparDivContainer() {
  var elemento = document.querySelector("#container");
  while (elemento.firstChild) {
    elemento.removeChild(elemento.firstChild);
  }
}