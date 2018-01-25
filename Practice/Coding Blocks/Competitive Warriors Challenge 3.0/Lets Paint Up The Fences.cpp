#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 5555
int n,a[maxn];
int Solve(int l,int r)
{
    int Min=a[l];
    for(int i=l+1;i<=r;i++)Min=min(Min,a[i]);
    int ans=Min,pre=l;
    for(int i=l;i<=r;i++)
    {
        a[i]-=Min;
        if(a[i]==0)
            ans+=Solve(pre,i-1),pre=i+1;
    }
    if(pre<=r)ans+=Solve(pre,r);
    return min(ans,r-l+1);
}
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        printf("%d\n",Solve(1,n));
    }
    return 0;
}
