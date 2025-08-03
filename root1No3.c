#include<stdio.h>
#include<math.h>
int main(){
       double xL;
       double xR;
       double xM ,fxM,fxR,xM_new,xM_old,E=1.0,fxL;
       int x,n,i;
       int iteration = 0;
       for(i =0 ; ;i++){
              scanf("%d %d",&x,&n);
              if(2<=n && n<=x && x<= 2000000){
                     break;
              }
              else{
                     printf("input Again 2<n<x<2000000\n");
              }
       }
       scanf("%lf %lf",&xL,&xR);
       do{
              xM = (xL+xR)/2;
              fxM = pow(xM,n)-x;
              fxR = pow(xR,n)-x;
              xM_new = xM;
       
              if(fxM*fxR < 0){
                     xL = xM;
              }
              else{
                     xR = xM;
              }
               
              if(iteration > 0){
                     E = fabs((xM_new-xM_old)/xM_new);
              }
              xM_old = xM;
              iteration++;
       }while(E > 0.000001);
       printf("ans = %.4lf\n",xM);
       return 0;
}