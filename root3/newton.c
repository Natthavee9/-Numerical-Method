#include<stdio.h>                                //newton
#include<math.h>
double f(double x){
    return pow(x,2)-7;
}
double fp(double y){
    return 2*y;
}
int main(){
    double xi = 2.0,E=1.0,fx,fpx,xNew,xOld;
    int iteration = 1;
    while (iteration<5){
        xOld = xi;
        fx = f(xi);
        fpx = fp(xi);
        xi = xi - (fx/fpx); 
        xNew = xi;
        E = fabs((xNew - xOld)/xNew);
        printf("iteration = %d -> x = %.6lf , error = %.7lf\n",iteration,xNew,E);
        iteration++;
    }
    return 0;
}