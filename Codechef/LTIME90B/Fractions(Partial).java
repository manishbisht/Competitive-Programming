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
	static long __gcd(long a, long b)  
	{  
	    if (b == 0)  
	        return a;  
	    return __gcd(b, a % b);  
	      
	} 
	public static void main(String[] args) throws java.lang.Exception{
		FastReader sc=new FastReader();
		int n=sc.nextInt();
		long n1,d1,res=0;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				n1=i*(j+1);
				d1=(i+1)*j;
				long d;  
			    d = __gcd(n1, d1);  
			    n1 = n1 / d;
			    d1 = d1 / d;
			    if(n1+1==d1) {
			    	res++;
			    }
			}
		}
		System.out.println(res);
	}
}
