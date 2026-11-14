#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

//------------------------------------------------------------

                        //  ESTÁ FUNCIONANDO
                        
unsigned long long fatorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    return a * fatorial(a - 1);
}

unsigned float 

int main()
{
    // Variável do primeiro valor
    float a;
    
    // Variável do primeiro valor
    float b;
    
    //variável operador
    char operador;
    
    //variável para continuar ou encerrar processo
    char SimOuNao;
    
    short int erro = 0;
    
    do
    {
        erro = 0;
        
        // solicitação do operador
        printf("\n operações possíveis:");
        printf("\n + soma"); 
        printf("\n - subrtração"); 
        printf("\n / divisão"); 
        printf("\n * multiplicação");
        printf("\n r raiz quadrada");
        printf("\n p potência");
        printf("\n f para fatorial");
        printf("\n s para seno");
        
        printf("\n\n deseja fazer uma operação com raiz ou fatorial? (s/n) \n\n\t");
        scanf(" %c", &SimOuNao);
        
            //para realizar operações com raiz ou fatorial
            if(SimOuNao == 's') 
                {   
                    printf("\n digite o operador: ");
                    scanf(" %c", &operador);
                    printf("\n digite seu número: ");
                    scanf(" %f", &a);
                }
                else if(SimOuNao != 's' && SimOuNao != 'n')
                    {
                        printf("\n digite um valor válido ('s' ou 'n')");
                        erro = 1;
                    }
                else if(operador != 'f' && operador != 'r')
                    {
                        printf("\n digite um operador válido ('f' ou 'r')");
                        erro = 1;
                    }
                
                    else
                        {   
                             //solicitação do primeiro numero
                            printf("\n digite o 1° numero da sua operação: ");
                            scanf(" %f", &a);
                            
                            printf("\ndigite qual operação deseja realizar: ");
                            scanf(" %c", &operador);
                            
                            printf("\n digite o 2° numero da sua operação: ");
                            scanf(" %f", &b);
                            
                        }
                        
                        
            // conferindo operações que podem causar erro
            
            //Divisão por zero
            if(operador == '/' && b == 0)
                    {
                        printf("\t \n Não é possível realizar divisão por 0. \n ");
                        erro = 1;
                    }
            
            //raiz de número negativo   
            if(operador == 'r' && a < 0){
                        printf("\t \n Não é possível realizar a raiz de números negativos. \n ");
                        erro = 1;
                    }
                    
            //potênicia de número fracionado
            if(operador == 'p' && a < 0 && (ceil(b)!= floor (b)))
                    {
                        printf("\t \n Não é possível realizar a potência de base negativa com expoente fracionado. \n ");
                        erro = 1;
                    }
            
            //fatorial de numero negativo
            if (operador == 'f') 
            {
                if (a < 0) 
                    {
                        printf("\n O fatorial deve ser um numero inteiro positivo.\n");
                        erro = 1;
                    } 
                else if (ceil(a) != floor(a)) 
                    {
                        printf("\t ATENÇÃO: O número foi arredondado\n");
                    }
            }
            if(erro != 1)
            {
                switch(operador)
                {
                    case '/': printf("\n \t resultado: %.2f \n", a / b);
                    break;
                        
                    case '*': printf("\n \t resultado: %.2f \n", a * b); 
                    break;
                     
                    case '+': printf("\n \t resultado %.2f \n", a + b); 
                    break;
                        
                    case '-': printf("\n \t resultado: %.2f \n", a - b); 
                    break;
                    
                    case 'r': printf("\n \t resultado: %.2f \n", sqrt(a));
                    break;
                        
                    case 'p': printf("\n \t resultado: %.8f \n", pow(a, b));
                    break;
                        
                    case 'f': printf("\n\t resultado: %lld \n", fatorial((a)));
                    break;
                    
                    case 's': printf("\n \t resultado: %f \n", sin(a));
                    break;
                }
            }
                
        printf("\n \n Deseja continuar? (s/n)  ");
        scanf(" %c", &SimOuNao);
        
        system("clear");
        
    } 
    
    while(SimOuNao == 's');
    printf("\n \t Encerrado");
        
    
    //retorna o valor para a função chamada
    return 0;
}

//int relacionado com %d = valor da variavel

//manipulação de endereço

// %p ponteiro (localizador)

//scanf recebe informação do teclado (&)

// \t desloca o coneudo para a esquerda