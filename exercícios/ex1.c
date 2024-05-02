/*Escreva uma função recursiva que retorne a soma dos elementos de um vetor: long int somavet(int *a, int qtde);*/

#include <stdio.h>

long int somavet(int *a, int qtde){
    //caso base
    if (qtde==0)
    {
        return 0;
    }
    return a[qtde-1] +somavet(a, qtde-1);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    // Chamando a função somavet e exibindo o resultado
    printf("Soma dos elementos do vetor: %ld\n", somavet(vetor, tamanho));

    return 0;
}