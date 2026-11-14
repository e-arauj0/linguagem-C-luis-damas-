#include <stdio.h>

int main()
{
    int a;
    int b;
    int res;
    
    printf("\t Calculadora \n\n");
    printf("digite o primeiro valor: ");
    scanf(" %d", &a);
    printf("digite um número: ");
    scanf(" %d", &b);
    
    res = a + b;
    printf("\n \n o resultado de %d + %d é: %d", a, b, res );

    res = a - b;
    printf("\n \n o resultado de %d - %d é: %d", a, b, res );
    
    res = a * b;
    printf("\n \n o resultado de %d * %d é: %d", a, b, res );
    
    if(b == 0)
    {
        printf("\n \n não é possível realizar a divisão");
    } 
    
    else 
    {
        
        res = a / b;
        printf("\n \n o resultado de %d / %d é: %d \n ", a, b, res );
        
        res = a % b;
        printf("o resto de %d / %d é: %d", a, b, res); //%% é o símbolo para o resto
    }
    
    return 0;
}
