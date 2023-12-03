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
#define vpii vector<pii>
#define vpll vector<pll>
#define vpci vector<pci>
#define vpsi vector<psi>
#define vpsl vector<psl>
#define vpss vector<pss>
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
#define SC2(a, b) cin >> (a) >> (b)
#define SC3(a, b, c) cin >> (a) >> (b) >> (c)
#define SC4(a, b, c, d) cin >> (a) >> (b) >> (c) >> (d)
#define SIG() cin.ignore()
#define SS(s) getline(cin, (s))
#define memzero(x) memset(x, 0, sizeof(x))
#define mem(a, b) memset(a, b, sizeof(a))
#define even(x) !(x & 1)
#define odd(x) x & 1
#define MAX(a) *max_element(all(a))
#define MIN(a) *min_element(all(a))

#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define ins insert
#define last back()
#define leng length()

#define br cout << endl
#define pf(a) cout << a
#define pfn(a) cout << a << endl
#define pfd(d, a) cout << setprecision(d) << a
#define pfdn(d, a) cout << setprecision(d) << a << endl
#define pfs(s, a) cout << s << a
#define pfsn(s, a) cout << s << a << endl
#define pfsd(s, d, a) cout << s << setprecision(d) << a
#define pfsdn(s, d, a) cout << s << setprecision(d) << a << endl

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
vector<ll> prime{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211 , 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};

void solve()
{
    int n,ncopy;
    mii take;
    SC(n);
    ncopy =n;

    for(int i =0; n != 1 ; i++){
        if(n % prime[i] == 0){
            n /= prime[i];
            take[prime[i]]++;
            i--;
        }
    }

    pfs(ncopy , " = ");
    mii:: iterator it;
    for(it = take.begin(); it != take.end(); it++){
        cout<<it->first<<" ^ "<<it->second;
        if(next(it) != take.end()) pf(" * ");
    }
    br;
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