/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		   int n=sc.nextInt();
		   long x=sc.nextLong();
		   long[] arr=new long[n];
		   for(int i=0;i<arr.length;i++){
		       arr[i]=sc.nextLong();
		   }
		   Arrays.sort(arr);
		   long day=0;
		   long x1=x;
		  for(int i=0;i<arr.length;i++){
		     if(x<arr[i]){
		          while(x<arr[i]){
		              x=x*2;
		              day++;
		          }
		     }
		      if(x==arr[i]){
		          arr[i]=0;
		          day++;
		          x=x*2;
		      }else if(x>arr[i]){
		          x=arr[i]*2;
		          if(x<x1){
		              x=x1;
		          }
		          arr[i]=0;
		            day++;   
		      }
		  }
		   System.out.println(day);
		    t--;
		}
	}
}
