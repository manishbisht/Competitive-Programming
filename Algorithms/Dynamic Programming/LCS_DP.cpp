//Length of Longest Common Subsequence problem using Dynamic Programming


#include<iostream>
#include<string.h>
using namespace std; 
  
/* Function to get max of 2 integers */
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}  
  

int longestCommonSubsequence( char *arr1, char *arr2, int m, int n )  
{  
    int LCS[m + 1][n + 1];  
    int i, j;  
      
    /* In the following steps LCS[i][j]  
       contains length of Longest common subsequence of arr1[0..i-1] 
       and arr2[0..j-1]. It uses a Dynamic programming approach */
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            LCS[i][j] = 0;  
      
        else if (arr1[i - 1] == arr2[j - 1])  
            LCS[i][j] = LCS[i - 1][j - 1] + 1;  
      
        else
            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);  
        }  
    }  
          
    //Returns the longest common subsequence
    return LCS[m][n];  
}  
  

  
//Main Function
int main()  
{  
    char arr1[100];  
    char arr2[100];  

    cout<<"\nEnter the 1st string: ";
    cin>>arr1;

    cout<<"\nEnter the 2nd string: ";
    cin>>arr2;
      
    int s1 = strlen(arr1);  
    int s2 = strlen(arr2);  
      
    cout << "\nLength of the Longest Common Subsequence is: " 
         << longestCommonSubsequence( arr1, arr2, s1, s2 )<<endl;  
      
    return 0;  
}  