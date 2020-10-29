import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the biggerIsGreater function below.
    static String biggerIsGreater(String w) 
    {
        char charArray[]=w.toCharArray();
        int n=charArray.length;
        int endindex=0;
        for(endindex=n-1;endindex>0;endindex--)
        {
            if(charArray[endindex]>charArray[endindex-1])
            {
                break;
            }
        }
        if(endindex==0)
        {
            return "no answer";

        }
        else
        {
            int first=charArray[endindex-1],nextsmall=endindex;

            for(int startindex=endindex+1;startindex<n;startindex++)
            {
            
                if(charArray[startindex]>first&&charArray[startindex]<charArray[nextsmall])
                {
                   nextsmall= startindex;
                }
            }
            swap(charArray,endindex-1,nextsmall);

            Arrays.sort(charArray,endindex,n);
        }
        return new String(charArray);

    }
    static void swap(char charArray[],int i,int j)
    {
        char temp=charArray[i];
        charArray[i]=charArray[j];
        charArray[j]=temp;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int T = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int TItr = 0; TItr < T; TItr++) {
            String w = scanner.nextLine();

            String result = biggerIsGreater(w);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
