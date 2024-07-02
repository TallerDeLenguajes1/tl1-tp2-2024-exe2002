#include <stdio.h>
#include <time.h>
#define N 5
#define M 7
void main(){
    int i, j;
    int mt[N][M];
    int *puntero = mt;
    srand(time(NULL));
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            *(puntero +j) = 1 + rand() % 100;
            printf("%4d",*(puntero+j));
        }
        puntero++;
        printf("\n");
    }
}