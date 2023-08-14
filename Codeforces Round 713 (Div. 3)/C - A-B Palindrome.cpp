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

void solve()
{
    int a, b;
    cin >> a >> b;

    int c = 0;
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
        if (s[i] == '?')
            c++;
    }
    
    if (c == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                cout << -1 << "\n";
                return;
            }
        }
        if (a > 0 || b > 0)
        {
            cout << -1 << "\n";
            return;
        }
        cout << s << "\n";
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - i - 1] != '?')
        {
            if (s[n - i - 1] == '0' && a > 0)
            {
                s[i] = '0';
                a--;
            }
            else if (s[n - i - 1] == '0' && a == 0)
            {
                cout << -1 << "\n";
                return;
            }
            else if (s[n - i - 1] == '1' && b > 0)
            {
                s[i] = '1';
                b--;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
        else if (s[n - i - 1] == '?' && s[i] != '?')
        {
            if (s[i] == '0' && a > 0)
            {
                s[n - i - 1] = '0';
                a--;
            }
            else if (s[i] == '0' && a == 0)
            {
                cout << -1 << "\n";
                return;
            }
            else if (s[i] == '1' && b > 0)
            {
                s[n - i - 1] = '1';
                b--;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - i - 1] == '?')
        {
            if (a >= 2)
                s[i] = '0', s[n - i - 1] = '0', a -= 2;
            else if (b >= 2)
                s[i] = '1', s[n - i - 1] = '1', b -= 2;
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    if (n % 2 == 1 && s[n / 2] == '?')
    {
        if (a > 0)
            s[n / 2] = '0', a--;
        else if (b > 0)
            s[n / 2] = '1', b--;
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    if (a > 0 || b > 0)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << s << "\n";
    return;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
