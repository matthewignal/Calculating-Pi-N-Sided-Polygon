/*
 * Calculate pi as the limit of a perimeter of a regular polygon
 * inscribed in a unit circle as the number of polygon's sides grows
 * doubling at each iteration.
 */
#include <stdio.h>
#include <math.h>

#define N 28

int main() {
    int i;
    long n;
    double s, p;

    i = 0;
    n = 4;
    s = 1./sqrt(2.);
    p = n*s;
    printf("%3d   %10ld   %.14f    % .14f    % .14f\n", i, n, s, p, M_PI-p);
    
    for(i = 1; i < N; i++) {
        s = sqrt(s*s/(2+2*sqrt(1-s*s)));
        n *= 2;
        p = n*s;
        printf("%3d   %10ld   %.14f    % .14f    % .14f\n", i, n, s, p, M_PI-p);
    }

    return(0);
}
