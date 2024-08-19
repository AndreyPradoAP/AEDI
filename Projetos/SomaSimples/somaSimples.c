# include <stdio.h>

int main(int argc, char const *argv[]){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    num1 = num1 + num2;

    printf("SOMA = %d\n", num1);

    return 0;
}