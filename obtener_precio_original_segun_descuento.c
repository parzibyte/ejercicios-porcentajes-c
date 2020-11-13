#include <stdio.h>

int main()
{
    float precioConDescuento, porcentajeDescuento;
    printf("Ingresa el porcentaje de descuento: ");
    scanf("%f", &porcentajeDescuento);
    printf("Ingresa el valor con el porcentaje aplicado: ");
    scanf("%f", &precioConDescuento);

    // Restamos el porcentaje de descuento a cien
    float porcentajeReal = 100 - porcentajeDescuento;
    // Y ahora sacamos el valor real. Para ello...
    float precioOriginal = (100 * precioConDescuento) / porcentajeReal;
    printf("Valor original: %0.2f", precioOriginal);
    return 0;
}