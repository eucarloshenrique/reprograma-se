(function () {
  'use strict'

  var forms = document.querySelectorAll('.needs-validation')

  Array.prototype.slice.call(forms)
    .forEach(function (form) {
      form.addEventListener('submit', function (event) {
        if (!form.checkValidity()) {
          form.classList.add('was-validated')
        } else {
          inserir()
          form.classList.remove('was-validated')
          form.reset()
        }
        event.preventDefault()
        event.stopPropagation()
      }, false)
    })
})()


function getLocalStorage() {
  return JSON.parse(localStorage.getItem('bd_brinquedos')) ?? [];
}

function setLocalStorage(bd_brinquedos) {
  localStorage.setItem('bd_brinquedos', JSON.stringify(bd_brinquedos));
}

function limparTabela() {
  var elemento = document.querySelector("#tabela>tbody");
  while (elemento.firstChild) {
    elemento.removeChild(elemento.firstChild);
  }
}

function atualizarTabela() { // Adaptação da função atualizarTabela (5 pontos)
  limparTabela();
  const bd_brinquedos = getLocalStorage();
  let index = 0;
  for (brinquedos of bd_brinquedos) {
    const novaLinha = document.createElement('tr');
    novaLinha.innerHTML = `
        <th scope="row">${index}</th>
        <td>${brinquedos.nome}</td>
        <td>${brinquedos.idade}</td>
        <td>${brinquedos.categoria}</td>
        <td>${brinquedos.cor}</td>
        <td>${brinquedos.peso}</td>
        <td>${brinquedos.material}</td>
        <td>
            <button type="button" class="btn btn-danger" id="${index}" onclick="excluir(${index})">Excluir</button>
        </td>
    `
    document.querySelector('#tabela>tbody').appendChild(novaLinha)
    index++;
  }
}

function inserir() { // Adaptação da função inserir (10 pontos)
  const brinquedos = {
    nome: document.getElementById('nome').value,
    idade: document.getElementById('idade').value,
    categoria: document.getElementById('categoria').value,
    cor: document.getElementById('cor').value,
    peso: document.getElementById('peso').value,
    material: document.getElementById('material').value
  }
  const bd_brinquedos = getLocalStorage();
  bd_brinquedos.push(brinquedos);
  setLocalStorage(bd_brinquedos);
  atualizarTabela();
}

function excluir(index) { // Adaptação da função excluir (5 pontos)
  const bd_brinquedos = getLocalStorage();
  bd_brinquedos.splice(index, 1);
  setLocalStorage(bd_brinquedos);
  atualizarTabela();
}

function validarCategoria() { // Adaptação da função validar (10 pontos)
  const bd_brinquedos = getLocalStorage();
  for (brinquedos of bd_brinquedos) {
    if (categoria.value == brinquedos.categoria) {
      categoria.setCustomValidity("Já existe brinquedo nesta categoria!");
      feedbackCategoria.innerText = "Já existe brinquedo nesta categoria!";
      return false;
    } else {
      categoria.setCustomValidity("");
      feedbackCategoria.innerText = "Informe uma outra categoria!";
    }
  }
  return true;
}

atualizarTabela();

// Seleção dos elementos e adição do listener para validação customizada (5 pontos)
const categoria = document.getElementById("categoria");
const feedbackCategoria = document.getElementById("feedbackCategoria");
categoria.addEventListener('input', validarCategoria);