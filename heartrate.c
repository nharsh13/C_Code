#include <stdio.h>
// HeartRate = pulse*6
int main(){
    int pulse;
    printf("Enter you pulse rate");
    scanf("%d",&pulse);
    int heartrate=pulse*6;
    printf("\n heartrate is %d",heartrate);

    if(heartrate>56){
        printf("\n your heart is in ecellent condition");

    }

    else{
        printf("\n keep up your exercise\n");

    }
    return 0;

    


}