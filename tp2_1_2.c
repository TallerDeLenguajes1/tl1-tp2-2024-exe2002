#include <stdio.h>
#include <time.h>
#include <string.h>
#define N 20

void main(){
    int i;
    double vt[N];
    double *puntero = vt;
    srand(time(NULL));
    for (i = 0; i < N; i++){
        puntero[i] = 1 + rand() % 100;
        printf("%f\n", puntero[i]);
    }
}