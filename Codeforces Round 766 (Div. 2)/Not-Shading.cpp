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

#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back

#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define sll set<ll>
#define qll queue<ll>
#define stll stack<ll>
#define Mi map<int, int>
#define mii map<pii, int>
#define alls(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

#define Size(s) s.length()
#define all(v) (v.begin, v.end)
#define rev(v) reverse(v.begin, v.end)
#define srt(v) sort(v.begin, v.end)

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define pv(v)             \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define max3(a, b, c) max(max((a), (b)), (c))
#define min3(a, b, c) min(min((a), (b)), (c))

#define cin(n) cin >> n
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define printE(str) cout << str << endl
#define print(str) cout << str << endl
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"
#define ye cout << "Yes\n"
#define no cout << "No\n"

#define sp " "
#define enter cout << endl;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define inf 1000000000000000005
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

#define foi(i, a, b) for (int i = a; i < b; i++)
#define foI(i, a, b) for (int i = a; i <= b; i++)
#define fol(i, a, b) for (ll i = a; i < b; i++)
#define foL(i, a, b) for (ll i = a; i <= b; i++)

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

ll mod_mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll mod_add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        char arr[n][m];

        int r, c;
        cin >> r >> c;

        ll count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == 'W')
                    count++;
            }
        }

        if (count == n * m)
        {
            cout << -1 << endl;
            continue;
        }

        if(arr[r-1][c-1] == 'B')
        {
            cout << 0 <<endl;
            continue;
        }

        bool row = false;
        bool col = false;

        for (int i = 0; i < m; i++)
        {
            if (arr[r-1][i] == 'B')
            {
                row = true;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][c-1] == 'B')
            {
                col = true;
                break;
            }
        }

        if (row || col)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}
