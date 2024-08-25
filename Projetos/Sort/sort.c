# include <stdio.h>

int main(int argc, char const *argv[]) {
    int numsSeq[3], numCres[3];

    for(int c = 0; c < 3; c++) {
        scanf("%d", &numsSeq[c]);

        if (c == 0) {
            numCres[c] = numsSeq[c];
        }
        else if (numCres[c-1] > numsSeq[c]) {
        
        }
    }
    
    return 0;
}
