#include <stdio.h>
    int main() {
    int numero, *ptr;
    numero = 79417;
    ptr = &numero;
    printf("%d \n", numero);
    *ptr = 90560;
    printf("%d \n", numero);
    return 0;
}
