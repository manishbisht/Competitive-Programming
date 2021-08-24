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
			int[] fr=new int[n-1];
			int[] to=new int[n-1];
			for(int i=0;i<n-1;i++) {
				fr[i]=sc.nextInt();
				to[i]=sc.nextInt();
			}
			Dictionary d= new Hashtable();
			int temp;
			for(int i=0;i<n-1;i++) {
				if(d.get(to[i])==null) {
					d.put(to[i],1);
				}
				else {
					temp=(int) d.get(to[i]);
					d.put(to[i],temp+1);
				}
			}
			int s=0;
			for (Enumeration i = d.elements(); i.hasMoreElements();) 
	        { 
	            temp=(int) i.nextElement();
	            if(temp>1) {
	            	s=s+temp-1;
	            }
	        }
			System.out.println(s);
		}
	}
}
