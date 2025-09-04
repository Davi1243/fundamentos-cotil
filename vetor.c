#include <stdio.h>

int main() {
    int numeros[10], i, maior;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    for(i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}
