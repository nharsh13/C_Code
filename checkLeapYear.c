#include <stdio.h>;
#include <stdbool.h>;
bool check(int year){
    if(year%400==0){
        return true;
    }

    else if(year%100==0){
        return false;
    }

    if(year%4==0){
        return true;
    }

    return false;
}

void main(){
    int year;
    printf("Enter the year \n");
    scanf("%d" ,&year);
    if(check(year)){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not leap year\n",year);
    }
}