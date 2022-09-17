#include <stdio.h>
#include <math.h>

double suite (double x, int n){
    double res=x;
    int i;
    for(i=1; i<=n; i++){
        res=((res+(x/res))/2);
    }
    return res;
}

double racine (double x, double precision){
    int n=2;
    while (precision<fabs((suite(x,n)-suite(x,n-1)))) {
        n++;
 //       printf("%d\n", fabs(suite(x,n)-suite(x,n-1)));
    }
    return suite(x,n);

}

int main() {

    printf("%f", suite(5,6));

    printf ("%f\n", racine(1, 0.1));
    printf ("%f\n", racine(100, 0.1));
    printf ("%f\n", racine(100, 0.01));
    printf ("%f\n", racine(100, 0.0001));

    return 0;
}
