/*
   Estudo de Funções Recursivas. 
   Função criada com base no enunciado número 1.2.4 do livro Algoritmos em Linguagem C de Paulo Feofiloff.
*/

#include <stdio.h>

/* A função abaixo recebe um inteiro num >= 1
   e retorna o piso do logaritmo de num na base 2 */
int pisoLog2(int num) {
    int logaritmo;
    for (logaritmo = 0; num > 1; logaritmo++)
        num /= 2;
  
    return logaritmo;
}

/* A função abaixo recebe um inteiro num >= 1
   e retorna o piso do logaritmo de num na base 2 
   de forma recursiva */
int pisoLog2Recu(int num){
    if(num <= 1)
        return 0;
    else{
        int logaritmo;
        logaritmo = pisoLog2Recu(num / 2) + 1;
        return logaritmo;
    }
}

int main(){
    int num;

    printf("Digite um número inteiro maior igual a 1\n");
    scanf("%d", &num);
    printf("Normal = %d\n", pisoLog2(num));
    printf("Recursivo = %d\n", pisoLog2Recu(num));

    return 0;
}
