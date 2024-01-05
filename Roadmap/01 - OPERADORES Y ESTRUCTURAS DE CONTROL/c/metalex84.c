#include<stdio.h>

void showMenuGeneral();
void showMenuArithmetic();
void showMenuLogic();
void showMenuBits();

int main(void)
{
    int respuesta = 0;
    do
    {
        showMenuGeneral();
        scanf("%d", &respuesta);
        switch (respuesta)
        {
            case 1:
                showMenuArithmetic();
                break;
            case 2:
                showMenuLogic();
                break;
            case 3:
                showMenuBits();
                break;
            default:
                break;
        }
    } while (respuesta != 4);
    printf("** Goodbye! **\n");
    return (0);
}

void showMenuGeneral()
{
    printf("**************************\n");
    printf("OPERACIONES Y CONTROL EN C\n");
    printf("**************************\n");
    printf("1. Aritmeticos\n");
    printf("2. Logicos y comparativos\n");
    printf("3. Bits\n");
    printf("4. Salir\n");
}

void showMenuArithmetic()
{
    printf("Operadores aritmeticos:\n");
    printf("Suma: 5 + 4 = %d\n", 5 + 4);
    printf("Resta: 5 - 4 = %d\n", 5 - 4);
    printf("Multiplicacion: 5 x 4 = %d\n", 5 * 4);
    printf("Division: 5 / 4 = %.2f\n", 5.0 / 4.0);
    printf("Modulo: 5 %% 4 = %d\n", 5 % 4);
    printf("\n\n");
}

void showMenuLogic()
{
    printf("Operadores logicos y comparativos:\n");
    printf("OR:\n");
    printf("Si 5 es mayor que 4 o 5 es negativo (se evalua la primera condicion): ");
    if (5 > 4 || 5 < 0)
    {
        printf("OK, 5 es mayor que 4\n");
    }
    else
    {
        printf("Esto es absurdo\n");
    }
    printf("AND:\n");
    printf("Si 5 es mayor que 4 y 5 es negativo (no pueden ser las dos a la vez): ");
    if (5 < 4 && 5 < 0)
    {
        printf("Esto es absurdo\n");
    }
    else
    {
        printf("Efectivamente, esto es falso\n");
    }
    printf("NOT:\n");
    printf("Es cierto que 5 es mayor que 0: la negacion resultaria una afirmacion falsa: ");
    if (!(5 > 0))
    {
        printf("Esto es absurdo\n");
    }
    else
    {
        printf("Efectivamente, esto es 'no cierto'\n");
    }
    printf("\n\n");
}

void showMenuBits()
{
    printf("Bitwise:\nn");
    printf("or (suna de bits): 5 (0101) or 4 (0100) =  %d (0101)\n", 5 | 4);
    printf("and (multiplicacion de bits): 5 (0101) and 4 (0100) = %d (0100)\n", 5 & 4);
    printf("not (intercambio de 0s y 1s: not 5 (0000 0101) = %d (1111 1010)\n", ~5);
    printf("xor ('o' exclusivo): 5 (0101) xor 4 (0100) = %d (0001)\n", 5 ^ 4);
    printf("desplazamiento a la derecha: 5 (0101) >> 1 = %d (0010)\n", 5 >> 1); // x >> n es quivalente a dividir x entre 2 a la n
    printf("desplazamiento a la izquierda: 5 (0101) << 1 = %d (1010)\n", 5 << 1); // x << n es equivalente a multiplicar x por 2 a la n
    printf("\n\n");
}
