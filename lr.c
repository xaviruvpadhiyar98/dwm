#include <stdio.h>
	#include <math.h>
	int main()
	{
    	float xx[20],yy[20],nr=0,dr=0;
    	int i,n;
    	float x[20],y[20];	//float x[5]={60,61,62,63,65},y[5]={3.1,3.6,3.8,4.0,4.1};
    	float xip,yop;
    	printf("Enter the number of observations:\n");
    	scanf("%d",&n);
    	printf("Enter the values of x:\n");
    	for(int i=0;i<n;i++)
    		scanf("%f",&x[i]);
    	printf("Enter the values of y:\n");
    	for(int i=0;i<n;i++)
    		scanf("%f",&y[i]);
    	double sum_y=0,sum_xy=0,sum_x=0,sum_xx=0,sum_x2=0,slope=0,intercept=0,reg;
    	for(i=0;i<n;i++)//calculate xi square and yi square
    	{
	   	 	xx[i]=x[i]*x[i];
	   	 	yy[i]=y[i]*y[i];
    	}//for
    	for(i=0;i<n;i++)
    	{
	   	 	sum_x+=x[i];//calculate summation of xi
	   	 	sum_y+=y[i];//calculate summation of yi
	   	 	sum_xx+= xx[i];//calculate summation of xi square
	   	 	sum_xy+= x[i]*y[i];//calculate summation of deviation
    	}//for
    	//calculate regression slope
    	nr=(n*sum_xy)-(sum_x*sum_y);
    	sum_x2=sum_x*sum_x;
    	dr=(n*sum_xx)-sum_x2;
    	slope=nr/dr;
    	//calculate regression coefficient
    	double fac = pow(10, 2);	//printf("\nfac=%f\n",fac);
    	slope=round(slope*fac)/fac;  	 //printf("\nslope=%f\n",slope);
    	intercept=(sum_y- slope*sum_x)/n;
    	reg= intercept + (slope*64);
    	printf("\nSlope: %.2f\nIntercept: %.3f\nRegression: %.3f\n",slope,intercept,reg);
    	printf("\nLinear Regression Equation: y=%.2fx+%.3f\n",slope,intercept);
    	printf("\nEnter a value of x:\n");
    	scanf("%f",&xip);
    	yop=(slope*xip)+intercept;
    	printf("\nThe value of y from Linear Regression equation will be:\ny=%.3f\n",yop);
    	return 0;
	} 
