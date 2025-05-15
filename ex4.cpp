#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
    if (expoente == 0) // o numero elevado a 0 é 1
        return 1;
    else
        return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente, resultado;

    printf("digite a base: ");
    scanf("%d", &base);

    printf("digite o expoente (positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0)
        printf("O expoente deve ser positivo\n");
    else {
        resultado = potencia(base, expoente); // calcula a potência usando função recursiva
        printf("%d elevado a %d = %d\n", base, expoente, resultado); // exibe o resultado
    }

    getchar();
    return 0;
}

