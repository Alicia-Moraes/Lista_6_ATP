#include <stdio.h>
#include <stdlib.h>

int soma (int a){
    if(a == 1)
        return 1; // a soma é 1
    return a + soma(a - 1); // a + soma dos numeros anteriores
}

int main(){
    int num; 
    printf("digite um numero para calcular a soma dos numeros naturais até o numero: ");
    scanf("%d", &num);

    if(num < 1)
        printf("digite um número natural maior ou igual a 1\n");
    else
        printf("Soma: %d\n", soma(num)); // resultado da função soma, que calcula a soma dos números naturais até 'num'

    getchar();
    return 0;
}