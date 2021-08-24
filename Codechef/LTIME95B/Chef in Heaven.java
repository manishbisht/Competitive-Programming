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
			int l=sc.nextInt();
			String s=sc.next();
			int ones=0,zero=0;
			int flag=0;
			for(int i=0;i<l;i++) {
				if(s.charAt(i)=='1') {
					ones++;
				}
				if(s.charAt(i)=='0') {
					zero++;
				}
				if(ones>=zero) {
					flag=1;
					break;
				}
			}
			if(flag==1) {
				System.out.print("YES\n");
			}
			else {
				System.out.print("NO\n");
			}
		}
	}
}
