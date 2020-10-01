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
		    
		    int k=sc.nextInt();
		    k--;
		    char[][]arr=new char[8][8];
		    for(int i=0;i<arr.length;i++){
		        for(int j=0;j<arr[0].length;j++){
		            if(i==0 && j==0){
		                arr[i][j]='O';
		            }else{
		                if(k>0){
		                    arr[i][j]='.';
		                    k--;
		                }
		            }
		        }
		    }
		    for(int i=0;i<arr.length;i++){
		        for(int j=0;j<arr[0].length;j++){
		            if(arr[i][j]=='O' || arr[i][j]=='.'){
		                System.out.print(arr[i][j]);
		            }else{
		                System.out.print("X");
		            }
		        }
		        System.out.println();
		    }
		    t--;
		}
	}
}
