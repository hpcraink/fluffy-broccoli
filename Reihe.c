#include <stdio.h>
#include <math.h>

int CalculateSchleife(int H)
{
    float addedn = 0;
    int i=0;

    for( i = 1; addedn < H; i++)
    {        
        addedn = addedn + (1./i);
    }
    return i;
}

int main ()
{
    int n;

    printf("Geben Sie eine Zahl ein \n");
    scanf("%i", &n);
    n = CalculateSchleife(n);
    printf("Die Summe ist = %i",n);
    return 0;
}