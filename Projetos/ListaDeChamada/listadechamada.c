# include <stdio.h>
#include <string.h>

int main() {
    int numAlunos, numSort;

    scanf("%d %d", &numAlunos, &numSort);

    char nomes[numAlunos][20];

    for (int i = 0; i < numAlunos; i++) {
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < numAlunos - 1; i++) {
        for (int c = 0; c < numAlunos - i - 1; c++) {
            int t = strcmp(nomes[c], nomes[c + 1]);

            if (strcmp(nomes[c], nomes[c + 1]) > 0) {
                char nomeAju[20];

                strcpy(nomeAju, nomes[c + 1]);
                strcpy(nomes[c + 1], nomes[c]);
                strcpy(nomes[c], nomeAju);           
            }
        }
        
    }

    printf("%s\n", nomes[numSort - 1]);

    return 0;
}
