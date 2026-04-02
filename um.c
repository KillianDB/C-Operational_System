//biblioteca import de forma estatica, acessa pelo exec, acesso organico e mais rápido
#include <stdio.h> 

//quem chama o main é o SO
int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("O numero %d é par.\n", num);
    } else {
        printf("O numero %d é impar.\n", num);
    }

    return 0;
}