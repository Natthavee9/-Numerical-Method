#include<stdio.h>      //secant
#include<math.h>
double fx(double x){
    return pow(x,2)-7;
}
int main(){
    double x0 = 2.0,x1=2.5,E=1.0,xOld,xNew,xi,fx0,fx1;
    int iteration = 1;
    while(iteration<5){
        fx0 = fx(x0);
        fx1 = fx(x1);
        xi = x1 - ((fx1*(x0-x1))/(fx0-fx1));
        E = fabs((xi-x1)/xi);
        x0 = x1;
        x1 = xi;
        printf("iteration %d -> x = %.6lf , error = %.6lf\n",iteration,xi,E);
        iteration++;
    }
    return 0;
}