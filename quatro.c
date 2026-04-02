//biblioteca import de forma estatica, acessa pelo exec, acesso organico e mais rápido
#include <stdio.h> 

//quem chama o main é o SO
int main()
{
    printf("Digite dois números:\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Números digitados nessa ordem: %d e %d\n", num1, num2);

    int temp = num1;
    num1 = num2;      
    num2 = temp;     

    printf("Números após a troca: %d e %d\n", num1, num2);

    return 0;
}