#include<stdio.h>           //root1 No6
#include<math.h>
int main(){
	double xL;
    double xR;
    double x1 ,fx1,fxR,x_new,x_old,E = 1.0, fxL,L,R;
    int x,n,i;
    int iteration = 0;
    while(1){
        scanf("%d %d",&x,&n);
        if(2<=n && n<=x && x<= 2000000){
            break;
        }
        else{
            printf("Input Again\n");
        }
    }
    scanf("%lf %lf",&xL,&xR);
    for(i=0 ; xL<xR;i++){
        L = pow(i,n)-x;
        R = pow(i+1,n)-x;
        xL = i;
        xR = i+1;
        if(L*R < 0){
            printf("%lf %lf\n",xL,xR);
            break;
        }
    }
    
    while(E>0.000001){
    	fxL = pow(xL,n)-x;
        fxR = pow(xR,n)-x;
        x1 = ((xL*fxR)-(xR*fxL))/(fxR-fxL);
        fx1 = pow(x1,n)-x;
        x_new = x1;
        if(iteration > 0){
            E = fabs((x_new-x_old)/x_new);
        }
        x_old = x1;
        if(fx1*fxR < 0){
        	xL = x1;
		}
		else{
			xR = x1;
	    }
        iteration++;
	};
	printf("x = %.4lf\n",x1);
	return 0;
}