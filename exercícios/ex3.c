#include <stdio.h>

int fibonacci(int n) {
    // Caso base: se n for 0 ou 1, retorna n
    if (n == 0 || n == 1)
        return n;
    // Caso recursivo: a soma dos dois termos anteriores da sequência de Fibonacci
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    double n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    // Calcula o n-ésimo termo da sequência de Fibonacci e imprime o resultado
    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
    
    return 0;
}