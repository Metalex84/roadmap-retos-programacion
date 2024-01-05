#include<stdio.h>

void showMenuGeneral()
{
    printf("**************************\n");
    printf("OPERACIONES Y CONTROL EN C\n");
    printf("**************************\n");
    printf("1. Aritmeticos\n");
    printf("2. Logicos y comparativos\n");
    printf("3. Asignacion\n");
    printf("4. Bits\n");
    printf("5. Salir\n");
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
    printf("4. xor\n");
    printf("5. >>\n");
    printf("6. <<\n");
    printf("\n\n");
}

int main(void)
{
    int respuesta;
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
                printf("Asignacion...\n");
                break;
            case 4:
                showMenuBits();
                break;
            default:
                break;
        }
    } while (respuesta != 5);
    return (0);
}