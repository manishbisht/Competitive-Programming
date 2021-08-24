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
			long n=sc.nextLong();
			if(n<=4) {
				if(n==1){
				    System.out.print("20\n");
				}
				if(n==2){
				    System.out.print("36\n");
				}
				if(n==3){
				    System.out.print("51\n");
				}
				if(n==4){
				    System.out.print("60\n");
				}
			}
			else {
			    if(n%4==0){
			        System.out.print( ( ( ((n-n%4)/4) *44) +16) +"\n");
			    }
			    else if(n%4==1){
			        System.out.print( ( ( ((n-n%4)/4) *44) +32) +"\n");
			    }
			    else if(n%4==2){
			        System.out.print( ( ( ((n-n%4)/4) *44) +44) +"\n");
			    }
			    else if(n%4==3){
			        System.out.print( ( ( ((n-n%4)/4) *44) +55) +"\n");
			    }
			}
		}
	}
}
