#include <stdio.h>
#include <math.h>


int main(){
    int zahl1;
    double umfang, radius;
    double kondensatorKapaziteat = 1e-12;
    zahl1 = 10;
    zahl1 = zahl1 * 10;
    radius = 12.64;
    umfang = 2 * radius * M_PI;

    printf("Ergebnis zahl1: %d\n", zahl1);
    printf("Umfang: %f\n", umfang);
    printf("Umfang: %.2f\n", umfang);
    printf("Pi: %.16e", M_PI);
    printf("C=%.16fFarad\n", kondensatorKapaziteat);
    printf("C=%.2eFarad\n", kondensatorKapaziteat);
    return 0;
}
