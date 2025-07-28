#include<stdio.h>
#include<math.h>
double cal(double num){
       double answer = pow(num,4)-13;
       return answer;
}
int main(){
       double xL = 1.5;
       double xR = 2.0;
       double xM ,fxM,fxR,xM_old,xM_new,E;
       int iteration = 0;
       do{
              xM = (xL+xR)/2;
              fxM = cal(xM);
              fxR = cal(xR);
              xM_new = xM;
              if(iteration == 0){
                 if(fxM*fxR < 0){
                     xL = xM;
                 }
                 else{
                     xR = xM;
                 }
                 iteration++;
                 continue;
              }
              
              if(iteration > 0){
                     E = fabs((xM_new-xM_old)/xM_new);
              }
              xM_old = xM;

              if(fxM*fxR < 0){
                     xL = xM;
              }
              else{
                     xR = xM;
              }
              iteration++;
       }while(iteration <=4);
       printf("ans = %.6lf\n",xM);
       printf("E = %.6lf\n",E);
       return 0;
}