#include <stdio.h>

void main(){
    int angka1, angka2;
    char operator;

    //printf("-program print angka sesuai input-\n");

    printf("masukkan angka pertama: \n");
    //getchar();
    scanf("%i", &angka1);

    printf("pilih operator (+, -, *, /): \n");
    getchar();
    scanf("%c", &operator);
    
    printf("masukkan angka kedua: \n");
    // getchar();
    scanf("%i", &angka2);
    
    switch (operator)
    {
    case '+':
        printf("%i", angka1 + angka2);
        break;
    case '-':
        printf("%i", angka1 - angka2);
        break;
    case '*':
        printf("%i", angka1 * angka2);
        break;
    case '/':
        printf("%i", angka1 / angka2);
        break;
    
    default:
        printf("salah bang!");
        break;
    }
}