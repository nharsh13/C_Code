#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
    if(n==0 || n==1)
    return false;
    for(int i=2;i<n/2;i++){
        if(n%i==0)
        return false;

    }
    return true;
}

void main(){
    int n=10;
    printf("Prime numbers from 1 to 10 are: \n");
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
    }
}
