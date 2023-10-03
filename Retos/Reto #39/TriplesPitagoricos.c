/*
 * Crea una función que encuentre todos los triples pitagóricos
 * (ternas) menores o iguales a un número dado.
 * - Debes buscar información sobre qué es un triple pitagórico.
 * - La función únicamente recibe el número máximo que puede
 *   aparecer en el triple.
 * - Ejemplo: Los triples menores o iguales a 10 están
 *   formados por (3, 4, 5) y (6, 8, 10).
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
    int c;
} Triple;

void encontrarTriples(int maximo, Triple **triplesPitagoricos, int *cantidadTriples){
    *triplesPitagoricos = (Triple *)malloc(maximo * sizeof(Triple));
    *cantidadTriples = 0;

    for (int i = 0; i < maximo; i++){
        for (int j = i; j < maximo; j++){
            for (int k = j; k < maximo; k++){
                if (i * i + j * j == k * k){
                    (*triplesPitagoricos)[*cantidadTriples].a = i;
                    (*triplesPitagoricos)[*cantidadTriples].b = j;
                    (*triplesPitagoricos)[*cantidadTriples].c = k;
                    (*cantidadTriples)++;
                }
            }
        }
    }
}

int main(){
    int max = 10;
    Triple *triples;
    int cantidadTriples;

    encontrarTriples(max, &triples, &cantidadTriples);

    for (int i = 0; i < cantidadTriples; i++){
        printf("(%d, %d, %d)\n", triples[i].a, triples[i].b, triples[i].c);
    }
    
    free(triples);

    return 0;
}