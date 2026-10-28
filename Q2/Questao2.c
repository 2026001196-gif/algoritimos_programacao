#include <stdio.h>

int main(){
        
    
float saldo = 500.50;
int *p = (int *) &saldo;
        printf("saldo=%.2f\n", *p);

    return 0;
}