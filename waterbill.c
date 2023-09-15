#include<stdio.h>

#define Demand _CHG 35.00  /*Basic water demand charge*/
#define PER_1000_CHG 1.10 /*charge per thousand gallons used*/
#define LATE_CHG 2.00     /*subcharge assessed on unpaid balance*/

/*Function prototypes 
void instruct_water(void);
double comp_use_charge(int previous,int current);
double comp_late_charge(double unpaid);
void display_bill(double late_charge,double bill,double unpaid);
*/

int main(void){
    int previous; /*reading from previous quarter in thousand of gallons*/
    int currentl; /*Current reading*/
    double unpaid; /*Unpaid balance*/
    int used; /*thousand of gallons used per quarter*/
    double bill;
    double use_charge;
    double late_charge;


    /*display user instruction*/
    instruct_water();

    printf("Enter unpaid balance> $");
    scanf("%lf",&unpaid);
    printf("Enter previous meter reading> $");
    scanf("%lf",&unpaid);
    printf("Enter unpaid balance> $");
    scanf("%d",&current);

    use_charge=comp_use_charge(previous,current);

    late_charge=comp_late_charge(unpaid);

    bill=Demand_CHG + use_charge+unpaid+late_charge;

    return(0);
}

void instruct_water(void){
    printf("this program figures a water bill");
    printf("based on th demand charge\n");
}

/*compute us charges*/
double comp_use_charge(int previous,int current){
    int used; /*gallons of water used*/
    double use_charge; /*charge for actual water use*/
    used=current-previous;
    use_charge=used*PER_1000_CHG;
    return(use_charge);
    
}

/*Compile late charge*/
double comp_late_charge(double unpaid){
    double late_charge;
    if(unpaid>0)
    late_charge=LATE_CHG;
    else
    late_charge=0.0;

    return(late_charge);
}

/*Dislay late charge if any and bill*/

void display_bill(double late_charge,double bill,double unpaid){
    if(late_charge>0.0){
        printf("\n Bill includes $%.2f late charge ",late_charge);
        printf("on unpaid balance of$%.2f \n",unpaid);

    }

    printf("\n Total due= $%.2f \n",bill);
}