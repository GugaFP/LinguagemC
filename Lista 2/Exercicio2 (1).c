//Guilherme Fellipe
//Exercício 2: Média aritmética de todas as turmas (em C)

#include <stdio.h>


double mediaTurma(int alunos);
double mediaEscola(int turmas);

int main(){
    
    int turmas;
    
    printf("Digite o número de turmas: ");
    
    scanf("%d", &turmas);
    
    double mediaGeral = mediaEscola(turmas);
    
    
    printf("A média geral da escola é: %.2f\n", mediaGeral);
    
    return 0;
}

double mediaTurma(int alunos){
    int soma = 0, nota;
    
      for (int i = 0; i < alunos; i++) {
        
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &nota);
        
        soma += nota;
}
    
    return (double)soma / alunos;
}

double mediaEscola(int turmas){

    double somaMedias = 0;
    
    for (int i = 0; i < turmas; i++){
        int alunos;
        
        printf("Digite o número de alunos da turma %d: ", i+1);
        
        scanf("%d", &alunos);
        
        somaMedias += mediaTurma(alunos); }
    
    return somaMedias / turmas;
}
