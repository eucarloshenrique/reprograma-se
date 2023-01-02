var somaImpar = somaPar = 0;
for(var i=0; i<=20; i++){
    console.log(i**2);
    if (((i**2)%2) == 0){
        somaPar = somaPar + (i**2);
    }else{
        somaImpar = somaImpar + (i**2);
    }
}
console.log("A soma dos pares é: ", somaPar);
console.log("A soma dos ímpares é: ", somaImpar);