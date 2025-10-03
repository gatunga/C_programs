#include<stdio.h>
#include<math.h>  //for M_PI
int main()
{
    float r,h,v,sa;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Enter the height: ");
    scanf("%f",&h);
        //calculations
    v = M_PI*r*r*h;
    sa = 2 *M_PI*r*r + 2 *M_PI*r*h;
    printf("Radius: %.2f\n",r);
    printf("Height: %.2f\n",h);
    printf("Volume: %.2f\n",v);
    printf("Surface area: %.2f\n",sa);
    return 0;
}
