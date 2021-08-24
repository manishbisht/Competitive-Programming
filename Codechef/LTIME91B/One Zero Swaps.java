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
			String s1=sc.next();
			String s2=sc.next();
			int i=0,count=0;
			while(i<n) {
				if(s1.charAt(i)==s2.charAt(i)) {
					i++;
					continue;
				}
				if(s1.charAt(i)=='0'&&s2.charAt(i)=='1') {
					if(count>0) {
						count--;
						i++;
						continue;
					}
					else {
						break;
					}
				}
				if(s1.charAt(i)=='1'&&s2.charAt(i)=='0') {
					count++;
					i++;
					continue;
				}
			}
			if(i==n&&count==0) {
				System.out.println("Yes");
			}
			else {
				System.out.println("No");
			}
		}
	}
}
