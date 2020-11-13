#include <stdio.h>

int main()
{
    float precioOriginal, porcentajeDescuento;
    printf("Ingresa el precio original: ");
    scanf("%f", &precioOriginal);
    printf("Ingresa el porcentaje de descuento: ");
    scanf("%f", &porcentajeDescuento);

    float descuento = precioOriginal * (porcentajeDescuento / 100);
    float precioConDescuento = precioOriginal - descuento;
    printf("Precio con descuento: %0.2f", precioConDescuento);
    return 0;
}