#include<stdio.h>
#include<math.h>                        //one point
double cal(double x){
    return  (7+x)/(1+x);
}
int main(){
    double x0=0,xi,E=1.0,x_old,x_new,fxi;
    int iteration ;
    for(iteration = 1;iteration<5;iteration++){
        xi = cal(x0);
        x_old = x0;
        x_new = xi;
        x0 = xi;
        E = fabs((x_new-x_old)/x_new);
        printf("iteration %d -> xi = %.6lf , error = %.6lf\n",iteration,xi,E);
    }
    return 0;
}