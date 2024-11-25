//Guilherme Fellipe
//Exercício 1: Soma dos N primeiros números primos (em C)


#include <stdio.h>

int primo(int num);
int somaPrimos(int N);

int main(){
    int N;
    
    
    printf("Digite o valor de N: ");
    
    scanf("%d", &N);
    
    int soma = somaPrimos(N);
    
    printf("A soma dos %d primeiros números primos é: %d\n", N, soma);
    
    return 0;
}

int primo(int num){
    if (num < 2) return 0;
      for (int i = 2; i < num; i++){
        if (num % i == 0)
            return 0;
}
    return 1;
}

int somaPrimos(int N){
    
    int soma = 0, contador = 0, numero = 2;
    
      while (contador < N){
        if (primo(numero)){
            soma += numero;
            contador++; }
         numero++;
}
    
    return soma;
}

