#include <stdio.h>
#include <math.h>

int main() {
    float xA = 2, yA = -3;
    float distancia = 5;

    float x1 = 2 + sqrt(pow(distancia, 2) - pow(yA, 2));
    float x2 = 2 - sqrt(pow(distancia, 2) - pow(yA, 2));

    printf("As coordenadas dos pontos P são:\n");
    printf("P1: (%.2f, 0)\n", x1);
    printf("P2: (%.2f, 0)\n", x2);

    return 0;
}




//sqrt: Serve para encontrar a raiz quadrada de um número.
//pow: Serve para elevar um número a uma determinada potência
