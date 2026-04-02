//biblioteca import de forma estatica, acessa pelo exec, acesso organico e mais rápido
#include <stdio.h> 

//quem chama o main é o SO
int main()
{
    printf("Digite 3 números para um vetor:\n");
    int vetor[3];
    int i = 0;
    while (i < 3) {
        int num;
        scanf("%d", &num);
        vetor[i] = num;
        i++;
    }
    printf("Números digitados:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", vetor[j]);
    }

    int maior = vetor[0];
    for (int j = 1; j < i; j++) {
        if (vetor[j] > maior) {
            maior = vetor[j];
        }
    }
    printf("\nMaior número: %d\n", maior);

    return 0;
}