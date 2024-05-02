#include <stdio.h>

int main()
{
    // definindo variaveis
        int operador; 
        float num1, num2, resultado;
    //mostrando as opções
        printf("Calculadora \n");
        printf("Selecione a operação: \n");
        printf("1. Adicao \n");
        printf("2. Subtração \n");
        printf("3. Multiplicação \n");
        printf("4. Divisão \n");
    //selecionando a opção
        scanf(" %d", &operador);
    //fazendo a conta desejada
        switch (operador)
        {
            case 1: //soma
                printf("Digite dois numeros para adicao: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2: //sub
                printf("Digite dois numeros para subtracao: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3: //multiplicação
                printf("Digite dois numeros para multiplicacao: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4: //divisão
                printf("Digite dois numeros para divisao: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                    }
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
        return 0;

}

