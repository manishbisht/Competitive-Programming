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
			long w=sc.nextLong();
			long wr=sc.nextLong();
			long[] wt=new long[n];
			Hashtable<Long,Long> d= new Hashtable<>();
			long temp;
			for(int i=0;i<n;i++) {
				wt[i]=sc.nextLong();
				if(d.get(wt[i])==null) {
					d.put(wt[i],(long) 1);
				}
				else {
					temp=(long) d.get(wt[i]);
					d.put(wt[i],temp+1);
				}
			}
			long temp2,resw=0;
			for (Enumeration k=d.keys(),ele=d.elements();k.hasMoreElements();)
	        {
	            temp=(long) k.nextElement();
	            temp2=(long) ele.nextElement();
	            if(temp2>=2) {
	            	if(temp2%2==0) {
	            		resw=resw+temp*temp2;
	            	}
	            	else {
	            		resw=resw+temp*(temp2-1);
	            	}
	            }
	        }
			if(resw+wr>=w) {
				System.out.print("YES\n");
			}
			else {
				System.out.print("NO\n");
			}
		}
	}
}
