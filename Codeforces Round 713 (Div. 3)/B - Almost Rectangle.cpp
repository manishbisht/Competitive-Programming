//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*     

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a = 0, b = 0, c = 0, d = 0;
        int p = 0;

        char ans[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ans[i][j];

                if (ans[i][j] == '*')
                {
                    if (p == 0)
                    {
                        a = i;
                        b = j;
                        p = 1;
                    }

                    else
                    {
                        c = i;
                        d = j;
                    }
                }
            }
        }

        if (b == d)
        {
            if (b == 0)
            {
                ans[a][b+1] = '*';
                ans[c][d+1] = '*';
            }
            else
            {
                ans[a][b-1] = '*';
                ans[c][d-1] = '*';
            }
        }

        if(a == c)
        {
            if (a == 0)
            {
                ans[a+1][b] = '*';
                ans[c+1][d] = '*';
            }
            else
            {
                ans[a-1][b] = '*';
                ans[c-1][d] = '*';
            }

        }

        else
        {
            ans[a][d] = '*';
            ans[c][b] = '*';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}
