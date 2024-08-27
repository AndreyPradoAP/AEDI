# include <stdio.h>

#define M_PI 3.14159

int main() {
    double raio;

    scanf("%lf", &raio);

    double area =  M_PI * (raio * raio);

    printf("A=%.4lf\n", area);
}