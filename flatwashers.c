#include<stdio.h>
#define PI 3.1459

int main (void)
{
    double hole_diameter,edge_diameter,thickness,density,quantity,weight,hole_radius,edge_radius,rim_area,unit_weight;
    printf("Inner diameter in centimeter");
    scanf("%lf",&hole_diameter);
    printf("outer diameter in centimeter");
    scanf("%lf",&edge_diameter);
    printf("Material density and quantity in gram per cubic centimeter");
    scanf("%lf",&density);
    printf("Quantity in batch");
    scanf("%lf",&quantity);

    hole_radius=hole_diameter / 2.0;
    edge_radius=edge_diameter / 2.0;

    rim_area= PI * edge_radius*edge_radius-PI *hole_radius*hole_radius;

    unit_weight=rim_area*thickness*density;
    weight=unit_weight*quantity;

    printf("\nThe expected weight of the batch is %.2f",weight);
    printf("gram.\n");

    return(0);
}