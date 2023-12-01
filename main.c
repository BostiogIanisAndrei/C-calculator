#include <stdio.h>

float numarul1;
float numarul2;
char operator;
float rezultat;

int debug()
{
    printf("DEBUG: \n");
    printf("Primul numar %f \nAl doilea numar %f \nOperatorul de calcul: %c",numarul1,numarul2,operator);
}

int main()
{
    printf("Calculator scris in C 1.12.2023 \n");
    printf("Introduceti primul numar: \n");
    scanf("%f",&numarul1);
    printf("Introduceti al doilea numar: \n");
    scanf("%f",&numarul2);
    printf("Introduceti operatorul de calcul (+,-,/,*): \n");
    scanf("%s",&operator);

    switch (operator)
    {
        case '+':
            rezultat = numarul1 + numarul2;
            printf("%g + %g = %g\n",numarul1,numarul2,rezultat);
            break;
        case '-':
            rezultat = numarul1 - numarul2;
            printf("%g - %g = %g\n",numarul1,numarul2,rezultat);
            break;
        case '/':
            rezultat = numarul1 / numarul2;
            printf("%g / %g = %g\n",numarul1,numarul2,rezultat);
            break;
        case '*':
            rezultat = numarul1 * numarul2;
            printf("%g * %g = %g\n",numarul1,numarul2,rezultat);
            break;
        default:
            printf("Acesta nu este un operator matematic \n");
            break;
    }
    // debug();
}

