const prompt = require("prompt-sync")();

// Leia os três números
var num1 = parseInt(prompt("Digite um numero: "));
var num2 = parseInt(prompt("Digite um outro: "));
var num3 = parseInt(prompt("Digite mais um numero: "));

// Calcule a soma e a média
var soma = num1 + num2 + num3;
var media = soma / 3;

// Mostre na tela o valor da soma e média
console.log("A soma dos 3 números é: ", soma);
console.log("A média dos 3 números é: ", media);