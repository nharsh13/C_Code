#include<stdio.h>
void main(){
    l1:while(1){
        printf("\n==============================================================================");
        printf("Enter your choice \n1.print\"hello\n2.print\"hi\n3.print\"good day\"\n4.print\"exit\"");
        int var;
        scanf("%d",&var);
        printf("\n \n Output:");
        switch(var)
        {
            case 1: printf("hello \n");
                    break;
            case 2:printf("hi \n");
                    break;
            case 3:printf("good day \n");
                break;
            case 4:exit(0);                    
        }
    }
}