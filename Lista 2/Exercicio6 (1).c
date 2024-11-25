//Guilherme Fellipe
//Exercício 6: Exibir o maior número (em C)

#include <stdio.h>

int maior(int a, int b);

int main(){
    
    
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    
    scanf("%d", &num2);
    
    int maiorValor = maior(num1, num2);
    
    printf("O maior número é: %d\n", maiorValor);
    
    return 0;
}

int maior(int a, int b){
    return (a > b) ? a : b;
}


