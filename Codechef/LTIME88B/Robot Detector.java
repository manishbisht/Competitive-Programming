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
		int x=sc.nextInt();
		int y=sc.nextInt();
		String s="U";
		for(int j=1;j<=x;j++) {
			if(j%2==0) {
				s=s+"D";
				for(int i=1;i<y;i++) {
					s=s+"L";
				}
				s=s+"U";
				
			}
			else {
			    if(j!=1){
			        s=s+"D";
			    }
				for(int i=1;i<y;i++) {
					s=s+"R";
				}
				if(j!=1){
				    s=s+"U";
				}
			}
		}
		System.out.println(s);
	}
}
