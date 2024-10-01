#include <stdio.h>

int main() {
    int num, n1= 0, n2 = 1, soma;
printf("------Sequência de Fibonacci------\n");
    printf("Digite um número: ");
    scanf("%d", &num);

    while (soma <= num) {
        soma = n1+n2;
        n1= n2;
        n2 = soma;

        if (soma == num) {
            printf("%d pertence à sequência.\n", num);
            return 0;
        }
    }

    printf("%d não pertence à sequência.\n", num);
    return 0;
}
