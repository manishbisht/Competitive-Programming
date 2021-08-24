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
		int t=sc.nextInt();
		while(t-->0) {
			int n=sc.nextInt();
			String s=sc.next();
			int[] arr=new int[n];
			int flag=1,zero=0,x=0,y=0,z=0,maxa=0;
			for(int i=0;i<n;i++) {
				if(s.charAt(i)=='0') {
					zero++;
				}
				else {
					if(zero-x>maxa) {
						y=zero;
						z=x;
						maxa=zero-x;
					}
					x++;
				}
			}
			System.out.println(n-Math.max(zero,Math.max(x,(y+x-z))));
		}
	}
}
