/* package codechef; // don't place package name! */
 
import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
public class Main
{static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
    
    static class Pair{
        int a,b;
        Pair(int a,int b){
            this.a=a;
            this.b=b;
        }
    }
    
    static class MySort implements Comparator<Pair> {
        public int compare(Pair x,Pair y){
            return x.a-y.a;
        }
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		FastReader sc= new FastReader();
		int n = sc.nextInt();
		PriorityQueue<Pair> pq = new PriorityQueue<>(new MySort());
		for(int i=0;i<n;i++){
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    pq.offer(new  Pair(a,1));
		    pq.offer(new  Pair(b,-1));
		}
		
		int ans = Integer.MIN_VALUE;
		int cur=0;
		while(pq.isEmpty()==false){
		    cur += pq.poll().b; 
		    ans = (int)Math.max(cur,ans);
		}
		PrintWriter out = new PrintWriter(System.out);
		
		out.println(ans);
		out.flush();
		out.close();
		
	}
}
