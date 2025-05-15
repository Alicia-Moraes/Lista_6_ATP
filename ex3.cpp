#include <stdio.h>
#include <stdlib.h>

int digito(int num){
    if (num < 0) // transforma o número negativo em positivo
        num = -num;

    if (num < 10) // número com um dígito
        return 1;

    return 1 + digito(num / 10); // remove o último dígito e soma 1
}

int main(){
    int n;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    printf("o numero tem %d digito(s)\n", digito(n)); // chama a função e exibe o resultado

    getchar();
    return 0;
}