#include <stdio.h>
//void formula()
int main(int argc, char **argv)
{
	float n= 4;
	printf("Let us assume there are %.0f nodes\n",n);		
	
	float A,B,C,D;
	A=1/n;B=1/n;C=1/n;D=1/n;				//all initial values are 1/n				
	printf("Intial Stage of A =%f\n",A);	//just printing	
	printf("Intial Stage of B =%f\n",B);
	printf("Intial Stage of C =%f\n",C);
	printf("Intial Stage of D =%f\n",D);
	printf("A  ----------------------------->B\n");			//diagram
	printf(" ^				^|\n");		
	printf(" |				||\n");		
	printf(" |				||\n");		
	printf(" |				||\n");		
	printf(" |				||\n");		
	printf(" |				||\n");
	printf("\\/				||\n");
	printf(" C   ----------------------------|\n");
	printf(" ^			 	 |\n");		
	printf(" |			 	 |\n");		
	printf(" |			 	 |\n");		
	printf(" |			 	 |\n");		
	printf(" |			 	 |\n");		
	printf(" |			 	 |\n");
	printf("\\/				 |\n");		
	printf(" D<------------------------------\n");
	
	
	
	
	int ia=1,ib=2,ic=2,id=2;			//incoming of node(i) 
	int oa=2,ob=1,oc=3,od=1;			//outgoing of node(o)
	float pra,prb,prc,prd;				//page rank of node(pr)
	printf("First Iteration\n\n");
	pra=C/oc;								//formula=number of incoming nodes/outgoing nodes
	prb=C/oc+A/oa;							//if more than 1 incoming add that with respected outgoing nodes 
	prc=A/oa+D/od;
	prd=C/oc+B/ob;
	printf("A = %f\n",pra);				//just printing the answers 		
	printf("B = %f\n",prb);
	printf("C = %f\n",prc);
	printf("D = %f\n",prd);
	
	printf("SEcond Iteration\n\n");
	A=pra;pra=0;							//now old values=new values
	B=prb;prb=0;							//initialize pr values of node=0 becoz didnt wanted to use more variables
	C=prc;prc=0;
	D=prd;prd=0;
	pra=C/oc;							//just copy this from above
	prb=C/oc+A/oa;
	prc=A/oa+D/od;
	prd=C/oc+B/ob;
	float prtotal= pra+prb+prc+prd;			//for checking total should be 1 
	printf("A = %f\n",pra);
	printf("B = %f\n",prb);
	printf("C = %f\n",prc);
	printf("D = %f\n",prd);
	printf("PRTOTAL = %f\n",prtotal);
	
	if(pra>prb){							//used for finding greatest number
		if(pra>prc){						
			if(pra>prd){
				printf("A is the most searched Website");}}}
	if(prb>pra){
		if(prb>prc){
			if(prb>prd){
				printf("B is the most searched Website");}}}
		
	if(prc>pra){
		if(prc>prb){
			if(prc>prd){
				printf("C is the most searched Website");}}}
	
	if(prd>pra){
		if(prd>prb){
			if(prd>prc){
				printf("D is the most searched Website");}}}
	
	return 0;
}

