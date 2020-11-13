#include <stdio.h>

int main()
{
    float precioOriginal, porcentajeAumento;
    printf("Ingresa el precio original: ");
    scanf("%f", &precioOriginal);
    printf("Ingresa el porcentaje de aumento: ");
    scanf("%f", &porcentajeAumento);

    float aumento = precioOriginal * (porcentajeAumento / 100);
    float precioConAumento = precioOriginal + aumento;
    printf("Precio con aumento: %0.2f", precioConAumento);
    return 0;
}