#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double xL;
    double xR;
    double x1 ,fx1,fxR,x_new,x_old,E=1.0,fxL;
    int x,n,i;
    int iteration = 0;
    while(true){
        cin >> x >> n;
        if(2<=n && n<=x && x<= 2000000){
            break;
        }
        else{
            cout<<"input Again"<<endl;
        }
    }
    cin >> xL >> xR;
    do{
        fxL = pow(xL,n)-x;
        fxR = pow(xR,n)-x;
        x1 = ((xL*fxR)-(xR*fxL))/(fxR-fxL);
        fx1 = pow(x1,n)-x;
        x_new = x1;

        if(fx1*fxL > 0){
            xR = x1;
        }
        else{
            xL = x1;
        }

        if(iteration > 0){
            E = abs((x_new-x_old)/x_new);
        }
        x_old = x1;
        iteration++;
    } while(E>0.0001);
    cout<< "x = " <<fixed <<setprecision(4) << x1 <<endl;
    return 0;
}