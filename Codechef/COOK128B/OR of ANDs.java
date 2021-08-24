import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main(String[] args) throws java.lang.Exception{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0) {
			int n=sc.nextInt();
			int q=sc.nextInt();
			long[] arr=new long[n];
			for(int i=0;i<n;i++) {
				arr[i]=sc.nextLong();
			}
			int[] bits=new int[32];
			String s;
			int pos;
			for(int i=0;i<n;i++) {
				s=Long.toBinaryString(arr[i]);
				pos=0;
				for(int j=s.length()-1;j>=0;j--) {
					if(s.charAt(j)=='1') {
						bits[pos]++;
					}
					pos++;
				}
			}
			long res=0,val=1;
			for(int j=0;j<32;j++) {
				if(bits[j]>0) {
					res=res+val;
				}
				val=val*2;
			}
			System.out.print(res+"\n");
			int x;
			long v;
			for(int i=0;i<q;i++) {
				x=sc.nextInt();
				v=sc.nextLong();
				s=Long.toBinaryString(arr[x-1]);
				pos=0;
				for(int j=s.length()-1;j>=0;j--) {
					if(s.charAt(j)=='1') {
						bits[pos]--;
					}
					pos++;
				}
				arr[x-1]=v;
				s=Long.toBinaryString(v);
				pos=0;
				for(int j=s.length()-1;j>=0;j--) {
					if(s.charAt(j)=='1') {
						bits[pos]++;
					}
					pos++;
				}
				res=0;
				val=1;
				for(int j=0;j<32;j++) {
					if(bits[j]>0) {
						res=res+val;
					}
					val=val*2;
				}
				System.out.print(res+"\n");
			}
		}
	}
}
