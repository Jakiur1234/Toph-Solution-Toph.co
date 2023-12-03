/* Bismillahir Rahmanir Raheem */
#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Make simpler to be faster
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pci pair<char, int>
#define psi pair<string, int>
#define psl pair<string, ll>
#define pss pair<string, string>
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define msi map<string, int>
#define msl map<string, ll>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define umsl unordered_map<string, ll>
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define SC(a) cin >> (a)
#define SIG() cin.ignore()
#define SS(s) getline(cin, (s))
#define fs first
#define sc second
#define pb push_back
#define ins insert
#define memzero(x) memset(x, 0, sizeof(x))
#define mem(a, b) memset(a, b, sizeof(a))
#define even(x) !(x & 1)
#define odd(x) x & 1
#define MAX(a) *max_element(all(a))
#define MIN(a) *min_element(all(a))

#define PI 3.1415926535897932384626433832795
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// Find the max
#define max3(a, b, c) max(max(a, b), c)
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define min3(a, b, c) min(min(a, b), c)
#define min4(a, b, c, d) min(min(a, b), min(c, d))

// RNG
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);
// Use mt19937_64 for 64 bit random numbers.

pii notes500(int cash)
{
    pii notes;
    if (cash >= 500)
    {
        notes.fs = cash / 500;
        notes.sc = cash % 500;

        return notes;
    }
    else
    {
        notes.first = 0;
        notes.second = cash;
        return notes;
    }
}

pii notes100(int cash)
{
    pii notes;
    if (cash >= 100)
    {
        notes.fs = cash / 100;
        notes.sc = cash % 100;

        return notes;
    }
    else
    {
        notes.first = 0;
        notes.second = cash;
        return notes;
    }
}

pii notes50(int cash)
{
    pii notes;
    if (cash >= 50)
    {
        notes.fs = cash / 50;
        notes.sc = cash % 50;
        return notes;
    }
    else
    {
        notes.first = 0;
        notes.second = cash;
        return notes;
    }
}

pii notes10(int cash)
{
    pii notes;
    if (cash >= 10)
    {
        notes.fs = cash / 10;
        notes.sc = cash % 10;

        return notes;
    }
    else
    {
        notes.first = 0;
        notes.second = cash;
        return notes;
    }
}

pii notes5(int cash)
{
    pii notes;
    if (cash >= 5)
    {
        notes.fs = cash / 5;
        notes.sc = cash % 5;

        return notes;
    }
    else
    {
        notes.first = 0;
        notes.second = cash;
        return notes;
    }
}

void solve()
{
    int cash, i;
    SC(cash);
    vi notes;
    pii count;

    count = notes500(cash);
    for (i = 0; i < count.first; i++)
    {
        notes.pb(500);
    }
    cash = count.second;

    count = notes100(cash);
    for (i = 0; i < count.first; i++)
    {
        notes.pb(100);
    }
    cash = count.second;

    count = notes50(cash);
    for (i = 0; i < count.first; i++)
    {
        notes.pb(50);
    }
    cash = count.second;

    count = notes10(cash);
    for (i = 0; i < count.first; i++)
    {
        notes.pb(10);
    }
    cash = count.second;

    count = notes5(cash);
    for (i = 0; i < count.first; i++)
    {
        notes.pb(5);
    }
    cash = count.second;

    for (int i = 0; i < cash; i++)
    {
        notes.pb(1);
    }

    sort(all(notes));

    for (int j = 0; j < notes.size(); j++)
    {
        if (notes[j] != 0)
        {
            if(j == notes.size() - 1){
               cout << notes[j]; 
            }
            else{
                cout << notes[j] << " "; 
            }
        }
    }

    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    // SIG();
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}