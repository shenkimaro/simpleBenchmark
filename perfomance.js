console.log('Usando NODEJS:');

var max = Math.pow(10, 9);

var inicio, fim, cont;

function soma(a, b){
    return a + b;
}
/*
 * sem chamada de funcao
 */
inicio = new Date().getTime();
cont = 0;
for (var index = 0; index < max; index++) {
	cont += 1;
}
fim = new Date().getTime();
console.log("Laço direto: " + cont + " em " + (fim - inicio));

/*
 * Chamando uma funcao
 */
inicio = new Date().getTime();
cont = 0;
for (var index = 0; index < max; index++) {
	cont = soma(cont, 1);
}
fim = new Date().getTime();
console.log("Chamando funcao: " + cont + " em " + (fim - inicio));
