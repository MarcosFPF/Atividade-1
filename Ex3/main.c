#include <stdio.h>
#include <stdlib.h>


int main() {
    char letra;

    printf("Informe uma Letra: ");
    scanf("%c", &letra);
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i'
       || letra == 'I' || letra == '0' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("A letra Informada é uma Vogal!");
    else
        printf("A letra Informada é uma Consoante!");
}

