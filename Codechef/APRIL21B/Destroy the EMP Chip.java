import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
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
		int t=sc.nextInt(),q=sc.nextInt(),d=sc.nextInt();
		while(t-->0) {
			long xl=(long)-1e18-1,xr=-1*xl;
			long yl=(long)-1e18-1,yr=-1*yl;
			int type=1;
			long xmid,ymid;
			String s;
			while(true) {
				if(type==1) {
					if(xr>=(xl+2)&&yr>=(yl+2)) {
						xmid=(xl+xr)/2;
						ymid=(yl+yr)/2;
						System.out.print(type+" "+xmid+" "+ymid+"\n");
						s=sc.next();
						if(s.equals("O")|s.equals("FAILED")) {
							break;
						}
						else if(s.equals("PY")) {
							xr=xmid-1;
							if(d==1){
		                		xr++;
		                		xl--;
		                    }
							yl=ymid-1;
		                	yr=ymid+1;
						}
						else if(s.equals("NY")) {
							xl=xmid+1;
							if(d==1) {
								xl--;
								xr++;
							}
							yl=ymid-1;
		                	yr=ymid+1;
						}
						else if(s.equals("XP")) {
							xl=xmid-1;
		                	xr=xmid+1;
		                	yr=ymid-1;
		                	if(d==1) {
		                		yr++;
		                		yl--;
		                	}
						}
						else if(s.equals("XN")) {
							xl=xmid-1;
		                	xr=xmid+1;
		                	yl=ymid+1;
		                	if(d==1) {
		                		yl--;
		                		yr++;
		                	}
						}
						else if(s.equals("PP")) {
							xr=xmid-1;
							if(d==1){
		                		xr++;
		                		xl--;
		                    }
							yr=ymid-1;
		                	if(d==1) {
		                		yr++;
		                		yl--;
		                	}
						}
						else if(s.equals("PN")) {
							xr=xmid-1;
							if(d==1){
		                		xr++;
		                		xl--;
		                    }
							yl=ymid+1;
							if(d==1) {
		                		yl--;
		                		yr++;
		                	}
						}
						else if(s.equals("NP")) {
							xl=xmid+1;
							if(d==1) {
								xl--;
								xr++;
							}
							yr=ymid-1;
		                	if(d==1) {
		                		yr++;
		                		yl--;
		                	}
						}
						else if(s.equals("NN")) {
							xl=xmid+1;
							if(d==1) {
								xl--;
								xr++;
							}
							yl=ymid+1;
							if(d==1) {
		                		yl--;
		                		yr++;
		                	}
						}
						if(d==1) {
							if(xr<=(xl+3)&&yr<=(yl+3)){
		                		type=2;
		                	}
						}
					}
					else {
						type=2;
						//System.out.print(type+" "+xl+" "+yl+" "+xr+" "+yr+"\n");
						//s=sc.next();
						//break;
					}
				}
				else {
					if(xr==(xl+3)&&yr==(yl+3)){
		    			System.out.print(type+" "+xl+" "+yl+" "+(xl+2)+" "+yr+"\n");
		    			s=sc.next();
		    			if(s.equals("O")|s.equals("FAILED")){
		    				break;
		                }
		    			else if(s.equals("IN")){
		    				xr=xl+2;
		    			}
		    			else{
		    				xl=xl+2;
		                    xr++;
		                }
		    		}
		            if(xr==(xl+2)&&yr==(yl+3)){
		            	System.out.print(type+" "+xl+" "+yl+" "+xr+" "+(yl+2)+"\n");
		                s=sc.next();
		                if(s.equals("O")|s.equals("FAILED")){
		                	break;
		                }
		                else if(s.equals("IN")){
		                	System.out.print(type+" "+xl+" "+yl+" "+xr+" "+(yl+2)+"\n");
		                	s=sc.next();
		                	if(s.equals("O")|s.equals("FAILED")){
		    				    break;
		                    }
		                }
		                else{
		                	System.out.print(type+" "+xl+" "+(yl+2)+" "+xr+" "+(yl+4)+"\n");
		                    s=sc.next();
		                    if(s.equals("O")|s.equals("FAILED")){
		    				    break;
		                    }
		                }
		                //break;
		            }
		            if(xr==(xl+3)&&yr==(yl+2)){
		            	System.out.print(type+" "+xl+" "+yl+" "+(xl+2)+" "+yr+"\n");
		                s=sc.next();
		                if(s.equals("O")|s.equals("FAILED")){
		                	break;
		                }
		                else if(s.equals("IN")){
		                	System.out.print(type+" "+xl+" "+yl+" "+(xl+2)+" "+yr+"\n");
		                    s=sc.next();
		                    if(s.equals("O")|s.equals("FAILED")){
		    				    break;
		                    }
		                }
		                else{
		                	System.out.print(type+" "+(xl+2)+" "+yl+" "+(xl+4)+" "+yr+"\n");
		                	s=sc.next();
		                	if(s.equals("O")|s.equals("FAILED")){
		    				    break;
		                    }
		                }
		                //break;
		            }
		            else{
		            	System.out.print(type+" "+xl+" "+yl+" "+xr+" "+yr+"\n");
		                s=sc.next();
		                if(s.equals("O")|s.equals("FAILED")){
		    				break;
		                }
		                //break;
		            }
				}
			}
		}
	}
}
