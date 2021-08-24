import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static class FastReader 
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
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		FastReader sc=new FastReader();
		int t=sc.nextInt();
		while(t-->0) {
			int n=sc.nextInt();
			int[] b=new int[n];
			for(int i=0;i<n;i++) {
				b[i]=sc.nextInt();
			}
			int flag=0;
			for(int i=0;i<n;i++) {
				if((i+1)%b[i]!=0) {
					flag=1;
					break;
				}
			}
			if(flag==1) {
				System.out.println("NO");
			}
			else {
				System.out.println("YES");
			}
		}
	}
}
