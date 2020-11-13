#include <stdio.h>

int main()
{
    float precioConAumento, porcentajeAumento;
    printf("Ingresa el porcentaje de aumento: ");
    scanf("%f", &porcentajeAumento);
    printf("Ingresa el valor con el porcentaje aplicado: ");
    scanf("%f", &precioConAumento);

    // Sumamos el porcentaje de descuento a cien
    float porcentajeReal = 100 + porcentajeAumento;
    // Y ahora sacamos el valor real. Para ello...
    float precioOriginal = (100 * precioConAumento) / porcentajeReal;
    printf("Valor original: %0.2f", precioOriginal);
    return 0;
}