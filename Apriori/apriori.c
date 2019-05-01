#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *input;
	char col1[20],col2[20],col3[20],col4[20];
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	int c12=0,c13=0,c14=0,c15=0;
	int c23=0,c24=0,c25=0;
	int c34=0,c35=0;
	int c45=0;
	int c123=0,c125=0,c124=0,c234=0,c235=0,c135=0,c245=0;
	int cFinal[50];
	int minSupport=2;
	int confidence=60;
	int candidate=0,list=0;
	
	int i=0;
	printf("The Minimum support is %d\n",minSupport);			
	printf("The Confidence is %d%\n",confidence);
	
	input=fopen("input.txt","r");	//taking input from file				//reading entire file
	fscanf(input,"%s%s%s%s",col1,col2,col3,col4);
	while(!feof(input)){
		cFinal[i]=atoi(col1);printf("%d\t",cFinal[i]);i++;	//string to int 
		cFinal[i]=atoi(col2);printf("%d\t",cFinal[i]);i++;
		cFinal[i]=atoi(col3);printf("%d\t",cFinal[i]);i++;	
		cFinal[i]=atoi(col4);printf("%d\t\n",cFinal[i]);i++;
		fscanf(input,"%s%s%s%s",col1,col2,col3,col4);
	}
	for(int j=0;j<i;j++){			//calculating number of occurence of each item
		if(cFinal[j]==1)
			c1++;
		if(cFinal[j]==2)
			c2++;
		if(cFinal[j]==3)
			c3++;
		if(cFinal[j]==4)
			c4++;
		if(cFinal[j]==5)
			c5++;		}
	
	
	printf("\n\nCandidate Set %d \n",candidate);		//printing candidate and itemset
	printf("1\t%d\n",c1);
	printf("2\t%d\n",c2);
	printf("3\t%d\n",c3);
	printf("4\t%d\n",c4);
	printf("5\t%d\n",c5);
	
	printf("\nList = %d \n",list);
	if(c1 >= minSupport) printf("1\t%d\n",c1);
	if(c2 >= minSupport) printf("2\t%d\n",c2);
	if(c3 >= minSupport) printf("3\t%d\n",c3);
	if(c4 >= minSupport) printf("4\t%d\n",c4);
	if(c5 >= minSupport) printf("5\t%d\n",c5);
	
	candidate++;
	list++;
	
	
	
	input=fopen("input.txt","r");	//taking input from file		
	fscanf(input,"%s%s%s%s",col1,col2,col3,col4);			//now comparing 1-2,2-3,3-4,......
	while(!feof(input)){
		if((strcmp(col1,"1")==0 && strcmp(col2,"2")==0) || (strcmp(col1,"1")==0 && strcmp(col3,"2")==0) || (strcmp(col1,"1")==0 && strcmp(col4,"2")==0) || (strcmp(col2,"1")==0 && strcmp(col3,"2")==0) || (strcmp(col2,"1")==0 && strcmp(col4,"2")==0) || (strcmp(col3,"1")==0 && strcmp(col4,"2")==0))  
			c12++;		
		if((strcmp(col1,"1")==0 && strcmp(col2,"3")==0) || (strcmp(col1,"1")==0 && strcmp(col3,"3")==0) || (strcmp(col1,"1")==0 && strcmp(col4,"3")==0) || (strcmp(col2,"1")==0 && strcmp(col3,"3")==0) || (strcmp(col2,"1")==0 && strcmp(col4,"3")==0) || (strcmp(col3,"1")==0 && strcmp(col4,"3")==0))
			c13++;
		if((strcmp(col1,"1")==0 && strcmp(col2,"4")==0) || (strcmp(col1,"1")==0 && strcmp(col3,"4")==0) || (strcmp(col1,"1")==0 && strcmp(col4,"4")==0) || (strcmp(col2,"1")==0 && strcmp(col3,"4")==0) || (strcmp(col2,"1")==0 && strcmp(col4,"4")==0) || (strcmp(col3,"1")==0 && strcmp(col4,"4")==0))
			c14++;
		if((strcmp(col1,"1")==0 && strcmp(col2,"5")==0) || (strcmp(col1,"1")==0 && strcmp(col3,"5")==0) || (strcmp(col1,"1")==0 && strcmp(col4,"5")==0) || (strcmp(col2,"1")==0 && strcmp(col3,"5")==0) || (strcmp(col2,"1")==0 && strcmp(col4,"5")==0) || (strcmp(col3,"1")==0 && strcmp(col4,"5")==0))
			c15++;
		if((strcmp(col1,"2")==0 && strcmp(col2,"3")==0) || (strcmp(col1,"2")==0 && strcmp(col3,"3")==0) || (strcmp(col1,"2")==0 && strcmp(col4,"3")==0) || (strcmp(col2,"2")==0 && strcmp(col3,"3")==0) || (strcmp(col2,"2")==0 && strcmp(col4,"3")==0) || (strcmp(col3,"2")==0 && strcmp(col4,"3")==0))
			c23++;
		if((strcmp(col1,"2")==0 && strcmp(col2,"4")==0) || (strcmp(col1,"2")==0 && strcmp(col3,"4")==0) || (strcmp(col1,"2")==0 && strcmp(col4,"4")==0) || (strcmp(col2,"2")==0 && strcmp(col3,"4")==0) || (strcmp(col2,"2")==0 && strcmp(col4,"4")==0) || (strcmp(col3,"2")==0 && strcmp(col4,"4")==0))
			c24++;
		if((strcmp(col1,"2")==0 && strcmp(col2,"5")==0) || (strcmp(col1,"2")==0 && strcmp(col3,"5")==0) || (strcmp(col1,"2")==0 && strcmp(col4,"5")==0) || (strcmp(col2,"2")==0 && strcmp(col3,"5")==0) || (strcmp(col2,"2")==0 && strcmp(col4,"5")==0) || (strcmp(col3,"2")==0 && strcmp(col4,"5")==0))
			c25++;
		if((strcmp(col1,"3")==0 && strcmp(col2,"4")==0) || (strcmp(col1,"3")==0 && strcmp(col3,"4")==0) || (strcmp(col1,"3")==0 && strcmp(col4,"4")==0) || (strcmp(col2,"3")==0 && strcmp(col3,"4")==0) || (strcmp(col2,"3")==0 && strcmp(col4,"4")==0) || (strcmp(col3,"3")==0 && strcmp(col4,"4")==0))
			c34++;	
		if((strcmp(col1,"3")==0 && strcmp(col2,"5")==0) || (strcmp(col1,"3")==0 && strcmp(col3,"5")==0) || (strcmp(col1,"3")==0 && strcmp(col4,"5")==0) || (strcmp(col2,"3")==0 && strcmp(col3,"5")==0) || (strcmp(col2,"3")==0 && strcmp(col4,"5")==0) || (strcmp(col3,"3")==0 && strcmp(col4,"5")==0))
			c35++;	
		if((strcmp(col1,"4")==0 && strcmp(col2,"5")==0) || (strcmp(col1,"4")==0 && strcmp(col3,"5")==0) || (strcmp(col1,"4")==0 && strcmp(col4,"5")==0) || (strcmp(col2,"4")==0 && strcmp(col3,"5")==0) || (strcmp(col2,"4")==0 && strcmp(col4,"5")==0) || (strcmp(col3,"4")==0 && strcmp(col4,"5")==0))
			c45++;		
		fscanf(input,"%s%s%s%s",col1,col2,col3,col4);
		}
	
	
	printf("\n\nCandidate Set %d \n",candidate);
	printf("12=%d\n",c12);
	printf("13=%d\n",c13);
	printf("14=%d\n",c14);
	printf("15=%d\n",c15);
	printf("23=%d\n",c23);
	printf("24=%d\n",c24);
	printf("25=%d\n",c25);
	printf("34=%d\n",c34);
	printf("35=%d\n",c35);
	printf("45=%d\n",c45);
	
	printf("\nList = %d \n",list);
	if(c12 >= minSupport) printf("12\t%d\n",c12);
	if(c13 >= minSupport) printf("13\t%d\n",c13);
	if(c14 >= minSupport) printf("14\t%d\n",c14);
	if(c15 >= minSupport) printf("15\t%d\n",c15);
	if(c23 >= minSupport) printf("23\t%d\n",c23);
	if(c24 >= minSupport) printf("24\t%d\n",c24);
	if(c25 >= minSupport) printf("25\t%d\n",c25);
	if(c34 >= minSupport) printf("34\t%d\n",c34);
	if(c35 >= minSupport) printf("35\t%d\n",c35);
	if(c45 >= minSupport) printf("36\t%d\n",c45);
	candidate++;
	list++;
	
	input=fopen("input.txt","r");	//taking input from file		
	fscanf(input,"%s%s%s%s",col1,col2,col3,col4);
	while(!feof(input)){
		if(((strcmp(col1,"1")==0 && strcmp(col2,"2")==0) && (strcmp(col3,"3")==0) )|| ((strcmp(col2,"1")==0 && strcmp(col3,"2")==0) && (strcmp(col4,"3")==0) ))
			c123++;
		if(((strcmp(col1,"1")==0 && strcmp(col2,"2")==0) && (strcmp(col3,"4")==0) )|| ((strcmp(col2,"1")==0 && strcmp(col3,"2")==0) && (strcmp(col4,"4")==0) ))
			c124++;
		if(((strcmp(col1,"1")==0 && strcmp(col2,"2")==0) && (strcmp(col3,"5")==0) )|| ((strcmp(col1,"1")==0 && strcmp(col2,"2")==0) && (strcmp(col4,"5")==0) ))
			c125++;
		if(((strcmp(col1,"1")==0 && strcmp(col2,"3")==0) && (strcmp(col3,"5")==0) )|| ((strcmp(col2,"1")==0 && strcmp(col3,"3")==0) && (strcmp(col4,"5")==0) ))
			c135++;
		if(((strcmp(col1,"2")==0 && strcmp(col2,"3")==0) && (strcmp(col3,"4")==0) )|| ((strcmp(col2,"2")==0 && strcmp(col3,"3")==0) && (strcmp(col4,"4")==0) ))
			c234++;
		if(((strcmp(col1,"2")==0 && strcmp(col2,"3")==0) && (strcmp(col3,"5")==0) )|| ((strcmp(col2,"2")==0 && strcmp(col3,"3")==0) && (strcmp(col4,"5")==0) ))
			c235++;
		if(((strcmp(col1,"2")==0 && strcmp(col2,"4")==0) && (strcmp(col3,"5")==0) )|| ((strcmp(col2,"2")==0 && strcmp(col3,"4")==0) && (strcmp(col4,"5")==0) ))
			c245++;						
		fscanf(input,"%s%s%s%s",col1,col2,col3,col4);
}	
	printf("\n\nCandidate Set %d \n",candidate);
	printf("C123=%d\n",c123);
	printf("C124=%d\n",c124);
	printf("C125=%d\n",c125);
	printf("C135=%d\n",c135);
	printf("C234=%d\n",c234);
	printf("C235=%d\n",c235);
	printf("C245=%d\n",c245);

	printf("\nList = %d \n",list);
	if(c123 >= minSupport) printf("123\t%d\n",c123);
	if(c124 >= minSupport) printf("124\t%d\n",c124);
	if(c125 >= minSupport) printf("125\t%d\n",c125);
	if(c135 >= minSupport) printf("135\t%d\n",c135);
	if(c234 >= minSupport) printf("234\t%d\n",c234);
	if(c235 >= minSupport) printf("235\t%d\n",c235);
	if(c245 >= minSupport) printf("245\t%d\n",c245);
	candidate++;
	list++;
	printf("\nTherefore rules are \n\n\n");
	printf("1-2--->1-2-3 =%.0f%%\n",(c123/(float)c12)*100);
	printf("2-3--->1-2-3 =%.0f%%\n",(c123/(float)c23)*100);
	printf("1-3--->1-2-3 =%.0f%%\n",(c123/(float)c13)*100);
	
	
	
	
	printf("1-2--->1-2-5 =%.0f%%\n",(c125/(float)c12)*100);
	printf("2-5--->1-2-5 =%.0f%%\n",(c125/(float)c25)*100);
	printf("1-5--->1-2-5 =%.0f%%\n",(c125/(float)c15)*100);
	
	printf("2--->2-5 = %.0f%%\n",(c25/(float)c2)*100);
	printf("5--->2-5 = %.0f%%\n",(c25/(float)c5)*100);
	
	printf("1--->1-5 = %.0f%%\n",(c15/(float)c1)*100);
	printf("5--->1-5 = %.0f%%\n",(c15/(float)c5)*100);
	
	
	printf("5 from 2-5 and 5 from 1-5 are association");
	
	
	
	
	
	return 0;
}

