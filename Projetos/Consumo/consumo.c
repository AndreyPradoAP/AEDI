# include <stdio.h>

int main(int argc, char const *argv[]) {
    int distancia;
    float valor;
    
    scanf("%d", &distancia);
    scanf("%f", &valor);

    printf("%.3f km/l\n", (float) distancia / valor);

    return 0;
}
