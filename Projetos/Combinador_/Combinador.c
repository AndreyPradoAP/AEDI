#include <string.h>
#include <stdio.h>

int main(){
    int N, p, tam;
    char A[51], B[51], resposta[102];

    scanf("%d\n", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%s %s\n", &A, &B);
        memset(resposta, '\0', sizeof(resposta));
        tam = strlen(A) < strlen(B) ? strlen(A) : strlen(B);
        p = 0;

        for (int c = 0; c < tam; ++c) {
            resposta[p++] = A[c];
            resposta[p++] = B[c];
        }

        if (tam < strlen(A)) {
            for (int c = tam; c < strlen(A); ++c) {
                resposta[p++] = A[c];
            }
        }
        else if (tam < strlen(B)) {
            for (int c = tam; c < strlen(B); ++c) {
                resposta[p++] = B[c];
            }
        }

        printf("%s\n", resposta);
    }

    return 0;
}