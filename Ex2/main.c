#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
  
    printf("Informe um numero: ");
    scanf("%d", &num);
  
    if (num > 0)
        printf("%d O numero Informado � Positivo!", num);
    else if (num < 0)
        printf("%d O numero informado � Negativo!", num);
    else if (num == 0)
        printf("%d numero � zero!", num);
  
    return 0;
}

