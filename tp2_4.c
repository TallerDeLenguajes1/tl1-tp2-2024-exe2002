//Añado librerias necesarias
#include <stdio.h>
#include <time.h>
//Punto 4.a, Declaración de estructuras
typedef struct {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} PC;
//Declaración de funciones
void mostrar(PC comp);
void mayorVelocidad(PC *comp);
void masVieja(PC *comp);
//Función main
void main(){
    PC computadora[5];      //Punto 4.b
    int random;
    char tipos[6][10] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    srand(time(NULL));
    for (int i; i < 5; i++){    //Randomizo los datos del arreglo de estructura
        computadora[i].velocidad = 1 + rand()%3;
        computadora[i].anio = 2015 +  rand()%9;
        computadora[i].cantidad = 1 + rand()%8;
        random = rand()%6;
        computadora[i].tipo_cpu = tipos[random];
        //Muestro las PC aleatorias que se generaron
        printf("\n$$$$$$$$$$$$$$$$$\n");
        printf("      PC %d\n",i+1);
        mostrar(computadora[i]);        
        printf("$$$$$$$$$$$$$$$$$");
        printf("\n");
    }
    printf("\nLa PC mas rapida es:");
    mayorVelocidad(&computadora);
    printf("\nLa PC mas vieja es: \n");
    masVieja(&computadora);
}
//Punto 4.c
void mostrar(PC comp){
    printf("Velocidad %d Ghz\n",comp.velocidad);
    printf("Anio %d\n",comp.anio); 
    printf("Cantidad %d\n",comp.cantidad);
    printf("Tipo de CPU: ");
    puts(comp.tipo_cpu);
}
//Punto 4.d
void masVieja(PC *comp){
    int maximo = 2025, vieja;
        for (int i = 0; i < 5; i++){
            if (comp[i].anio < maximo){
                maximo = comp[i].anio;
                vieja = i;
            }
        }
    mostrar(comp[vieja]);
}
//Punto 4.e
void mayorVelocidad(PC *comp){
    int mayor = 0, mejor;
    for (int i = 0; i < 5; i++){
        if (comp[i].velocidad > mayor){
            mayor = comp[i].velocidad;
            mejor = i;
        }
    }
    printf("\n");
    mostrar(comp[mejor]);
}