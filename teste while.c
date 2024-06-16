#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;  // Adicionando ponto-e-vírgula aqui
    }

    return 0;  // Movendo o return para fora do bloco desnecessário
}

