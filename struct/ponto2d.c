// Crie uma struct que represente um ponto 2D simples em um plano cartesiano. A struct deve ter dois campos inteiros: x e y. 
// Escreva uma função que receba duas structs como entrada e calcule a distância entre eles. Use a fórmula da distância euclidiana:

// ​ distância=√(x2−x1)²+(y2−y1)²

// Dica: Como o C não possui uma função embutida para calcular raízes quadradas, você precisará usar a função sqrt da biblioteca de matemática.

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;

double func_distancia(ponto a, ponto b){
    return sqrt(pow(b.x - a.x,2) + pow(b.y - a.y, 2));
}

int main(){
    ponto a{.x = 4, .y = 3};
    ponto b{.x = 0, .y = 0};

    printf("%f", func_distancia(a, b));

    return 0;
}