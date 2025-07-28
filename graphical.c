#include<stdio.h>
#include<math.h>
float cal(float num){
       float answer = (43*num)-180;
       return answer;
}
int main(){
       float result,x1,x2,j,root;
       int i,L,R;
       for(i = 0; i<=10;i++){
          x1 = cal(i);
          x2 = cal(i+1);
          if(x1*x2<=0){
              L = i;
              R = i+1;
           } 
       }
       for(j=L ; j<=R ; j=j+0.000001){
              if(fabs(cal(j))<=0.000001){
                     printf("root = %.6f",j);
                     break;
              }
       } 
       return 0;
}