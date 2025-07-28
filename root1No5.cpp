#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double cal(double x){
    return pow(x,4)-13;
}
int main(){
    double xL,xR,x,E,fxR,fxL,fx,x_old,x_new;
    int iteration;
    xL = 1.5;
    xR = 2.0;
    for(iteration = 0 ;iteration <= 4;iteration++){
        fxR = cal(xR);
        fxL = cal(xL);
        x = ((xL*fxR)-(xR*fxL))/(fxR-fxL);
        fx = cal(x);
        x_new = x;
        if(iteration == 0){
            if(fx*fxR < 0){
                xL = x;
            }
            else{
                xR = x;
            }
        }
        else{
            if(fx*fxR < 0){
                xL= x;
            }
            else{
                xR = x;
            }
            E = abs((x_new-x_old)/x_new);
            x_old =x;
        }
    }
    cout<< "x = " << fixed  << setprecision(6) << x <<endl;
    cout<< "E = " << fixed << setprecision(10) << E <<endl;
    return 0;
}