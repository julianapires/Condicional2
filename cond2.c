#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    float num;

    printf ("Informe um n�mero: ");
    scanf ("%f", &num);
    
    if (num>=0)
    {
    num = sqrt (num);
    printf ("A ra�z quadrada do n�mero informado �: %.2f\n", num);
    }else
    {
         printf ("O n�mero informado � inv�lido!\n");
    }           


  system("PAUSE");	
  return 0;
}
