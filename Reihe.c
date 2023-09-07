#include <stdio.h>
#include <math.h>
//WIDM hat ein Kommentar eingefügt und anschließen geaendert
////SEGH hat ein Kommentar eingefügt //07.09.2023
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
// Neu comment 07.09
int main ()
{
    int n;
// What happens if I insert this here?
    printf("Geben Sie eine Zahl ein \n");
    scanf("%i", &n);
    n = CalculateSchleife(n);
    printf("Die Summe ist = %i",n);
    return EXIT_SUCCESS;
}
