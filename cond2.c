#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    float num;

    printf ("Informe um número: ");
    scanf ("%f", &num);
    
    if (num>=0)
    {
    num = sqrt (num);
    printf ("A raíz quadrada do número informado é: %.2f\n", num);
    }else
    {
         printf ("O número informado é inválido!\n");
    }           


  system("PAUSE");	
  return 0;
}
