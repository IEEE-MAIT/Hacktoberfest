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
		    long n=sc.nextLong();
		    HashMap<Long,Long> mapX= new HashMap<>();
		      HashMap<Long,Long> mapY= new HashMap<>();
		    for(int i=0;i<4*n-1;i++){
		        long x=sc.nextLong();
		        long y=sc.nextLong();
		        long val=1;
		        if(mapX.containsKey(x) ){
		            mapX.remove(x);
		        }else{
		            mapX.put(x,val);
		        }
		        if(mapY.containsKey(y) ){
		            mapY.remove(y);
		        }else{
		            mapY.put(y,val);
		        }
		    }
		    for(Long key : mapX.keySet()){
            System.out.print(key+" ");
        }
        for(Long key : mapY.keySet()){
            System.out.print(key);
        }
        System.out.println();
		    t--;
		}
	}
}
