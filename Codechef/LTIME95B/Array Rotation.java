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
	public static void main(String[] args) throws java.lang.Exception{
		FastReader sc=new FastReader();
		int n=sc.nextInt();
		long[] arr=new long[n];
		long sum=0;
		for(int i=0;i<n;i++) {
			arr[i]=sc.nextLong();
			sum=(sum+arr[i])%1000000007;
		}
		
		int q=sc.nextInt(),x;
		for(int i=0;i<q;i++) {
			x=sc.nextInt();
			if(sum<0) {
				sum=(((sum*2)%1000000007)+1000000007)%1000000007;
			}
			else {
				sum=(sum*2)%1000000007;
			}
			System.out.print(sum+"\n");
		}
	}
}
