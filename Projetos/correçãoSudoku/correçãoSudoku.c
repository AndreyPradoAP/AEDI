/*
    Software para correção de jogos de sudoku, 
    baseado no problema G do arquivo: https://www.ime.usp.br/~cef/Xmaratona/problems/prova.pdf

    O software deve receber um número inteiro 'instancias' > 0 e uma quantidade
    'instancias' de soluções de jogos de sudoku. Para cada solução do sudoku, é retornado SIM caso a solução seja correta ou NAO caso a solução seja incorreta.
*/

#include <stdio.h>
#include <stdbool.h>

#define tamanhoSudoku 9

/*
    A função abaixo recebe uma matriz 'sudoku[tamanhoSudoku][tamanhoSudoku]'
    e verifica se os números da matriz pertence ao intervalo 0 < x < 10, 
    retornando um valor booleano como resposta
*/
bool verificarnumeros(int sudoku[tamanhoSudoku][tamanhoSudoku]) {
    int flag = 0;
    for (int c = 0; c < tamanhoSudoku; c++) {
            for (int j = 0; j < tamanhoSudoku; j++) {
                scanf("%d", &sudoku[c][j]);

                if (sudoku[c][j] > 0 && sudoku[c][j] < 10) {
                    flag++;
                }
            }
        }

    if(flag == 81) {
        return true;
    }
    else {
        return false;
    }
}


/*
    A função abaixo recebe uma matriz 'sudoku[tamanhoSudoku][tamanhoSudoku]'
    e verifica se as linhas da matriz não possuem repetição de números,
    retornando um valor booleano como resposta.
*/
bool verificarLinhas(int sudoku[tamanhoSudoku][tamanhoSudoku]) {
    for (int linha = 0; linha < tamanhoSudoku; linha++) {
        bool numeros[tamanhoSudoku] = {false};

        for (int coluna = 0; coluna < tamanhoSudoku; coluna++) {
            int numero = sudoku[linha][coluna];

            if (numeros[numero - 1]) {
                return false;
            }
            else {
                numeros[numero - 1] = true;
            }
        }
    }

    return true;
}

/*
    A função abaixo recebe uma matriz 'sudoku[tamanhoSudoku][tamanhoSudoku]'
    e verifica se as colunas da matriz não possuem repetição de números,
    retornando um valor booleano como resposta.
*/

int verificarColunas(int sudoku[tamanhoSudoku][tamanhoSudoku]) {
    for (int linha = 0; linha < tamanhoSudoku; linha++) {
        bool numeros[tamanhoSudoku] = {false};

        for (int coluna = 0; coluna < tamanhoSudoku; coluna++) {
            int numero = sudoku[coluna][linha];

            if (numeros[numero - 1]) {
                return false;
            }
            else {
                numeros[numero - 1] = true;
            }
        }
    }

    return true;
}

/*
    A função abaixo recebe uma matriz 'sudoku[tamanhoSudoku][tamanhoSudoku]'
    e verifica se as subdivisões da matriz não possuem repetição de números,
    retornando um valor booleano como resposta.
*/
int verificarQuadrados(int sudoku[tamanhoSudoku][tamanhoSudoku]) {
    for (int l = 0; l < tamanhoSudoku; l += 3) {
        for (int c = 0; c < tamanhoSudoku; c += 3) {
            bool numeros[tamanhoSudoku] = {false};

            for (int linha = l; linha < l + 3; linha++) {
                for (int coluna = c; coluna < c + 3; coluna++) {
                    int numero = sudoku[linha][coluna];

                    if (numeros[numero - 1]) {
                        return false;
                    }
                    else {
                        numeros[numero - 1] = true;
                    }
                }
            }
        }
    }

    return true;
}


int main() {
    int instancias;
    int sudoku[tamanhoSudoku][tamanhoSudoku];

    scanf("%d", &instancias);

    bool resposta[instancias];

    for (int i = 0; i < instancias; i++) {
        if (verificarnumeros(sudoku) && verificarLinhas(sudoku) && verificarColunas(sudoku) && verificarQuadrados(sudoku)) {
            resposta[i] = true;
        }
        else {
            resposta[i] = false;
        }
    }

    for (int i = 0; i < instancias; i++) {
        if (resposta[i]) {
            printf("Instancia %d\nSIM\n\n", i + 1);
        }
        else {
            printf("Instancia %d\nNAO\n\n", i + 1);
        }
    }

    return 0;
}
