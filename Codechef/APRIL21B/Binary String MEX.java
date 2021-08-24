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
			String s=sc.next();
			int[] zero=new int[s.length()];
			int[] ones=new int[s.length()];
			zero[s.length()-1]=s.length();
			if(s.charAt(s.length()-1)=='0') {
				zero[s.length()-1]--;
			}
			for(int i=s.length()-2;i>=0;i--) {
				zero[i]=zero[i+1];
				if(s.charAt(i)=='0') {
					zero[i]=i;
				}
			}
			if(zero[0]==s.length()) {
				System.out.print("0\n");
				continue;
			}
			ones[s.length()-1]=s.length();
			if(s.charAt(s.length()-1)=='1') {
				ones[s.length()-1]--;
			}
			for(int i=s.length()-2;i>=0;i--) {
				ones[i]=ones[i+1];
				if(s.charAt(i)=='1') {
					ones[i]=i;
				}
			}
			int[] dp=new int[s.length()+1];
			int[] dp1=new int[s.length()+1];
			for(int i=s.length()-1;i>=0;i--) {
				dp[i]=dp[i+1];
				dp1[i]=dp1[i+1];
				if(s.charAt(i)=='0'&&ones[i]<s.length()) {
					dp[i]=Math.max(dp[i],dp[ones[i]+1]+1);
				}
				if(s.charAt(i)=='1'&&zero[i]<s.length()) {
					dp[i]=Math.max(dp[i],dp[zero[i]+1]+1);
				}
				if(ones[i]<s.length()) {
					dp1[i]=Math.max(dp1[i],dp[ones[i]+1]+1);
				}
			}
			int ind=ones[0]+1,ind2=dp1[0]+1;
			int[] res=new int[s.length()];
			res[0]=1;
			int resl=1;
			for(int i=1;i<ind2;i++) {
				if(ind>=s.length()) {
					res[resl++]=0;
					continue;
				}
				if(zero[ind]>=s.length()) {
					ind=zero[ind]+1;
					res[resl++]=0;
					continue;
				}
				if(dp[zero[ind]+1]<ind2-i-1) {
					ind=zero[ind]+1;
					res[resl++]=0;
				}
				else {
					ind=ones[ind]+1;
					res[resl++]=1;
				}
			}
			for(int i=0;i<resl;i++) {
				System.out.print(res[i]);
			}
			System.out.print("\n");
		}
	}
}
