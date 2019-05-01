#include<stdio.h>
void main(){
	FILE *input;
	char Xvalues[20],Yvalues[20];				
	int Ex=0,Ey=0,Exy=0,Ex2=0;					//Summations Variable
	int x=0,y=0,xy=0,x2=0;					//x	 y	xy	x2
	float n=0;	
	float c=0,m=0;							//Y=mx+c
	int userx,outputY=0;
	
	input=fopen("input.txt","r");			//dataset is in input file
	
	fscanf(input,"%s%s",Xvalues,Yvalues);	//taking input in String/char
	while(!feof(input)){
		printf("X=%s",Xvalues);				
		x=atoi(Xvalues);					//converting String to integer
		Ex=Ex+x;							//Summation of X

		printf("\tY=%s",Yvalues);
		y=atoi(Yvalues);					//converting String to integer
		Ey=Ey+y;							//Summation of X
		
		xy=x*y;
		Exy=Exy+xy;							//Summation of XY
		printf("\tXY=%d",xy);				//printing X*Y values
		
		x2=x*x;					
		Ex2=Ex2+x2;							//Summation of X2
		printf("\tX2=%d\n",x2);				//printing X2 values
		n++;								//for counting how many entries are there in dataset
	fscanf(input,"%s%s",Xvalues,Yvalues);	//for looping condition 
	}
	
	printf("\nSumation of X=%d\n",Ex);		//printing all summations
	printf("Sumation of Y=%d\n",Ey);
	printf("Sumation of XY=%d\n",Exy);
	printf("Sumation of X2=%d\n",Ex2);
	printf("Total Entries in Dataset is %f\n",n);		//counting total number of  values
	
	//Calculating m = (nΣx y - ΣxΣy) / (nΣx2 - (Σx)2) 
	m=(n*Exy)-(Ex*Ey);			//spilited into 2 parts
	m=m / ((n*Ex2)-(Ex*Ex)); 
	
	//Calculating C= (1/n)(Σy - a Σx) 		
	c=(1 / n);								//splited into 2 parts	
	c=c*(Ey - (m * Ex)); 
	
	printf("The Value of M is %.1f\n",m);		//for printing only 1 digit after decimal			
	printf("The Value of C is %.1f\n",c);		
	
	printf("\nEnter Your X Value\n");
	scanf("%d",&userx);
	outputY=m*userx+c;							//Y=mx+C 

	printf("For The Given X=%d \t Y = %d\n",userx,outputY);	
}
