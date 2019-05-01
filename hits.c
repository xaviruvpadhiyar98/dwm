#include <stdio.h>
int a=65;
int main(int argc, char **argv)
{
	int inputmatrix[4][4]={	0,1,1,1,
							1,1,1,0,
							0,0,1,1,
							0,0,1,0};
	int u[4]={1,1,1,1};				//assume u=1					
	int v[4]={0};						
	int transposeinput[4][4]={0};										
	int sum=0;	
	printf("\nINPUT Matrix is \n\tA\tB\tC\tD\n");
	for(int i=0;i<4;i++){
		printf("%c\t",a+i);
		for(int j=0;j<4;j++){
			printf("%d\t",inputmatrix[i][j]);			//printing matrix
			transposeinput[j][i]=inputmatrix[i][j];		//transposing the matrix
			}
	printf("\n");}
		
	
	printf("\nTranspose Matrix is \n\tA\tB\tC\tD\n");
	for(int i=0;i<4;i++){
		printf("%c\t",a+i);
		for(int j=0;j<4;j++){
			printf("%d\t",transposeinput[i][j]);
			for(int k=0;k<4;k++){
			sum=sum+transposeinput[i][k]*u[k];			//matrix multiplication
			}
			v[i]=sum;					//output is V=at * U
			sum=0;
			}
			
	printf("\n");}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<4;k++)
			sum=sum+inputmatrix[i][k]*v[k];		// output is U=A*V
		u[i]=sum;
		sum=0;}
		printf("\n");}
		
	printf("\n\tUHUB\tVAUTH=\n");
	for(int i=0;i<4;i++)
		printf("%c\t%d\t%d\n",a+i,u[i],v[i]);		//printing V and U
		
	return 0;
}

