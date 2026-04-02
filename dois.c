//biblioteca import de forma estatica, acessa pelo exec, acesso organico e mais rápido
#include <stdio.h> 

//quem chama o main é o SO
int main()
{
    printf("Digite 10 números para um vetor:\n");
    int vetor[10];
    int i = 0;
    while (i < 10) {
        int num;
        scanf("%d", &num);
        vetor[i] = num;
        i++;
    }
    printf("Números digitados:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", vetor[j]);
    }

    i = 0;
    int soma = 0;
    while (i < 10) {
        soma += vetor[i];
        i++;
    }
    printf("\nSoma dos números: %d\n", soma);
    float media = (float)soma/10;
    printf("\nMédia dos números: %f\n", media);

    return 0;
}