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
			int x=sc.nextInt();
			Dictionary d=new Hashtable();
			int temp,temp2;
			for(int i=0;i<n;i++) {
				temp=sc.nextInt();
				if(d.get(temp)==null) {
					d.put(temp,1);
				}
				else {
					temp2=(int)d.get(temp);
					d.put(temp,temp2+1);
				}
			}
			for (Enumeration k = d.keys(); k.hasMoreElements();)
	        {
	            temp=(int) k.nextElement();
	            temp2=(int)d.get(temp);
	            if(temp2>1) {
	            	if(x>temp2-1) {
	            		x=x-temp2+1;
	            		d.put(temp,1);
	            	}
	            	else {
	            		d.put(temp,temp2-x);
	            		x=0;
	            	}
	            }
	            if(x==0) {
	            	break;
	            }
	        }
			if(x!=0) {
				for (Enumeration k = d.keys(); k.hasMoreElements();)
		        {
		            temp=(int)k.nextElement();
		            d.remove(temp);
		            x--;
		            if(x==0) {
		            	break;
		            }
		        }
			}
			System.out.print(d.size()+"\n");
		}
	}
}
