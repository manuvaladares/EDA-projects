#include <stdio.h>

int ehigual(char c[], char s[]){
    // Se ambas as strings são vazias, elas são iguais
    if (c[0] == '\0' && s[0] == '\0')
        return 1;
    if (c[0] != s[0])
        return 0;
    // Chama recursivamente para os restantes das strings
    return ehigual(c + 1, s + 1);
}

int main()
{
    char s[20];
    char c[20];
    scanf("%s", s);
    scanf("%s", c);
    ehigual(c,s);
    if(ehigual(c,s)){
        printf("São iguais");
    }
    else{
        printf("é diferente");
    }
}
