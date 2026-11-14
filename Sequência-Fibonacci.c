#include <stdio.h>
#include <unistd.h>

int main()
{
    
    long long a = 0;
    long long b = 1;
    int i = 0; // 
    char sn;
    
    do{
        printf("%lld \n ", a );
        a = a + b;
        i = i + 1;
        
        sleep(0);
        
        printf("%lld \n ", b );
        b = a + b;
        i = i + 1;
        
        sleep(0);
        
    } while(i < 92);
    

    return 0;
}