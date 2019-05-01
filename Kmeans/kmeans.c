#include <stdio.h>
#include<time.h>
int compare(int a,int b){		//compare function 
	return (a > b) - (a < b);	//returns 1 or -1
}	
int main(int argc, char **argv)
{
		
	FILE *input;
	time_t t;

	char num[20];
	int number[20];
	int i=0,a=0,j=0;
	 int m1=0,m2=0;			//old mean
	 int c1=0,c2=0;			
	int m11=0,m22=0;		//new mean
	int c;
	
	
	int clus1[20],clus2[20];		//2 cluster
	input=fopen("input.txt","r");	//taking input from file		
	fscanf(input,"%s",num);
	while(!feof(input)){
		number[i]=atoi(num);		//string to int
		fscanf(input,"%s",num);
		i++;						//to find how many total numbers are inputed
	}
	srand((unsigned)time(&t));		//to randomised the numbers using time
	
	m1=number[rand()%i];			//random means values
	m2=number[rand()%i];
	
	printf("FIrst Value is %d\n",m1);			
	printf("Second Random Value is %d\n",m2);
	
c=(m1+m2)/2;					//to find middle value for comparision
	
	while(a<i){					
		if(compare(number[a],c)==1){		//compare function called o/p(1,-1) 
			clus2[c2]=number[a];
			c2++; }							//to check maximux array size for printing
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}					//run condition
		a=0;						//back to a=0
		
	printf("\nClus 1:\t");			//printing cluster and caluculating new cluster mean values
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;		//becoz i dont want to use new variable for below loop
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;	
		printf("\n\n");

	m11=m11/c1;			//actual means value are calculated
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		//actual means values printed
	printf("m22=%d\n",m22);
	
	if(m22==m2 && m11==m1)		//comparing means
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;				//if no then ...
	m2=m22;
	m11=0;
	m22=0;	}
	
	c=(m1+m2)/2;			//copy the above fucking thing and paste 10 times
	
	
	while(a<i){
		if(compare(number[a],c)==1){
			clus2[c2]=number[a];
			c2++; }
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}
		a=0;
		
	printf("\nClus 1:\t");
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;
		printf("\n\n");

	m11=m11/c1;
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		
	printf("m22=%d\n",m22);

			if(m22==m2 && m11==m1)	
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;
	m2=m22;
	m11=0;
	m22=0;	}
	
	
	c=(m1+m2)/2;
	
	
	while(a<i){
		if(compare(number[a],c)==1){
			clus2[c2]=number[a];
			c2++; }
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}
		a=0;
		
	printf("\nClus 1:\t");
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;
		printf("\n\n");

	m11=m11/c1;
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		
	printf("m22=%d\n",m22);

			if(m22==m2 && m11==m1)	
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;
	m2=m22;
	m11=0;
	m22=0;	}
	
	
	
	c=(m1+m2)/2;
	
	
	while(a<i){
		if(compare(number[a],c)==1){
			clus2[c2]=number[a];
			c2++; }
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}
		a=0;
		
	printf("\nClus 1:\t");
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;
		printf("\n\n");

	m11=m11/c1;
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		
	printf("m22=%d\n",m22);

			if(m22==m2 && m11==m1)	
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;
	m2=m22;
	m11=0;
	m22=0;	}
	
	
	
	
	c=(m1+m2)/2;
	
	
	while(a<i){
		if(compare(number[a],c)==1){
			clus2[c2]=number[a];
			c2++; }
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}
		a=0;
		
	printf("\nClus 1:\t");
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;
		printf("\n\n");

	m11=m11/c1;
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		
	printf("m22=%d\n",m22);

			if(m22==m2 && m11==m1)	
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;
	m2=m22;
	m11=0;
	m22=0;	}
	
	
	
	
	c=(m1+m2)/2;
	
	
	while(a<i){
		if(compare(number[a],c)==1){
			clus2[c2]=number[a];
			c2++; }
		else {
			clus1[c1]=number[a];
			c1++; }
		a++;	}
		a=0;
		
	printf("\nClus 1:\t");
	while(j<c1){
		printf("%d\t",clus1[j]);
		m11=m11+clus1[j];
		j++;}
	
	j=0;
	
	printf("\nClus 2:\t");
	while(j<c2){
		printf("%d\t",clus2[j]);
		m22=m22+clus2[j];
		j++;	}	
	j=0;
		printf("\n\n");

	m11=m11/c1;
	m22=m22/c2;
	c1=0;
	c2=0;
	printf("m11=%d\t",m11);		
	printf("m22=%d\n",m22);

			if(m22==m2 && m11==m1)	
		printf("CLUSTER COMPLETE IS ABOVE");
	else{
	m1=m11;
	m2=m22;
	m11=0;
	m22=0;	}

}


