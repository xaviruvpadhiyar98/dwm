import java.util.Scanner;
public class Kmean
{
    public static void main(String args[])
    {
   	 Scanner s=new Scanner(System.in);
   //	 int arr[] = {2, 3,4,10,11,12,20,25,30}; // initial data    //{2, 3,4,10,11,12,20,25,30}; //{2, 3,4,6,6,8,10,11,12,14,15};
	 
	  System.out.print("Enter no. of elements you want in array:");
	  int len = s.nextInt();
      int arr[] = new int[len];
      System.out.println("Enter all the elements:");
      for(int i = 0; i < len; i++)
          arr[i] = s.nextInt();
	 
   	 int i, m1, m2, a, b, n = 0;
   	 boolean flag;//to check if m1 & m2 values of 2 iterations are equal
   	 float sum1, sum2;
   	 //Assume m1 and m2 values 
   	 a = arr[0];
   	 b = arr[1];
   	 m1 = a;//first element
   	 m2 = b;//second element
   	 int cluster1[] = new int[arr.length], cluster2[] = new int[arr.length];//declare clusters as array of integers
   	 do
   	 {
   	 	sum1 = 0;//sum1 & sum2 is sum of values in the clusters
   	 	sum2 = 0;
   	 	cluster1 = new int[arr.length];
   	 	cluster2 = new int[arr.length];
   	 	n++;
   	 	int k = 0, j = 0;//k is no. of elements assigned iun cluster 1, j for cluster 2
   	 	//assign element to clusters
   	 	for (i = 0; i < arr.length; i++)
   	 	{
   	     	if (Math.abs(arr[i] - m1) <= Math.abs(arr[i] - m2)) //nearer to mean of cluster 1
   	     	{
   	         	cluster1[k] = arr[i];
   	         	k++;
   	     	}
   	     	else
   	     	{
   	         	cluster2[j] = arr[i];
   	         	j++;
   	     	}
   	 	}//for
   		 
   	 	//colculate mean value for clusters
   	 	System.out.println();
   	 	for (i = 0; i < k; i++)
   	 	{
   	     	sum1 = sum1 + cluster1[i];
   	 	}
   	 	for (i = 0; i < j; i++)
   	 	{
   	     	sum2 = sum2 + cluster2[i];
   	 	}
   	 	//printing Centroids/Means
   	 	System.out.println("m1=" + m1 + "   m2=" + m2);
   	 	//store old value of centroid
   	 	a = m1;
   	 	b = m2;
   	 	//calculate new value of centroid
   	 	m1 = Math.round(sum1 / k);
   	 	m2 = Math.round(sum2 / j);
   	 	flag = !(m1 == a && m2 == b);//till new centroid & previous centroid are not same, repeat process

   		 System.out.println("After iteration " + n + " , cluster 1 :\n");	//printing the clusters of each iteration
   	 	for (i = 0; i < cluster1.length; i++)
   	 	{
   	     	System.out.print(cluster1[i] + "\t");
   	 	}

   	 	System.out.println("\n");
   	 	System.out.println("After iteration " + n + " , cluster 2 :\n");
   	 	for (i = 0; i < cluster2.length; i++)
   	 	{
   	     	System.out.print(cluster2[i] + "\t");
   	 	}

   	 } while (flag);

   	 System.out.println("\n Final cluster 1 :\n");        	// final clusters
   	 for (i = 0; i < cluster1.length; i++)
   	 {
   	 	System.out.print(cluster1[i] + "\t");
   	 }

   	 System.out.println("\nFinal cluster 2 :\n");
   	 for (i = 0; i < cluster2.length; i++)
   	 {
   	 	System.out.print(cluster2[i] + "\t");
   	 }
    }//main
}//class

