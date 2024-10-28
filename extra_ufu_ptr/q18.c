// Implemente uma funçao que calcule a area da superfıcie e o volume de uma esfera de raio R. 
// Essa funçao deve obedecer ao prototipo: void calc_esfera(float R, float *area, float *volume)
// A area da superfıcie e o volume sao dados, respectivamente, por:
// A = 4 ∗ p ∗ R²
// V = 4/3 ∗ p ∗ R³

#include <stdio.h>

#define PI 3.14159

void calc_esfera(float R, float *area, float *volume){
    *area = 4*PI*(R*R);
    *volume = 4.0/3.0 * PI * (R * R * R);
}

int main(){
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}