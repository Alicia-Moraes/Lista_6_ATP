#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    /* a função faz o com que o gerador de numeros aleatórios inicie com a hora atual e
    garante que a sequencia de numeros mude a cada execução*/

    printf("Numero aleatorio: %d\n", 2 + rand() % 11 );
    /* faz com que gere um número aleatório entre 2 e 12
    a função rand() % 11 gera um valor entre 0 e 10 e soma 2 ao intervalo*/

    getchar();
    return 0; 
}


