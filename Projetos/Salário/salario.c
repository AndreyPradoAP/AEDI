# include <stdio.h>

int main() {
    int id, horasTrabalhadas;
    float valor;

    scanf("%d", &id);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", valor);

    valor = valor * horasTrabalhadas;

    printf("NUMBER = %d\nSALARY = u$ %.2f\n", id, valor);
}