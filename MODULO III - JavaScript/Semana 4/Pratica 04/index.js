const prompt = require('prompt-sync')();

var alturas = [];
var altura;
var menores = [];
var alunos;

// Implementar a entrada de dados
for (var i = 0; i < 10; i++) {
  altura = parseFloat(prompt("Digite a altura: "));
  alturas.push(altura);
}
// Implementar o processamento de dados
// Fazer for dentro de for
for (var i = 0; i < 10; i++) {
  alunos = 0;
  for (var j = 0; j < 10; j++) {
    if (alturas[i] > alturas[j]) {
      alunos++;
    }
  }
  menores.push(alunos);
}
// Implementar a saída de dados
for (var i = 0; i < 10; i++) {
  console.log("Aluno " + i + ": maior que " + menores[i] + " alunos(s)");
}