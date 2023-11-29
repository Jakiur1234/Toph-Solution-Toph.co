/* Bismillahir Rahmanir Raheem */
/* Allah will help him who moves in the way of Allah */
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

/******** User-defined Function *******/
void solve(){
    long long int n, ans, q, factorial = 1;

    cin >> n;
    if (n < 20)
    {
        for (long long int p = n; p > 0; p--)
        {
            factorial = factorial * p;
        }

        if (ans > 0 && ans < 10)
        {
            cout << ans << endl;
        }
        else if (ans >= 10 && ans < 100)
        {
            cout << ans << endl;
        }
        else if (ans >= 100 && ans < 1000)
        {
            cout << ans << endl;
        }
        else if (ans >= 1000 && ans < 10000)
        {
            cout << ans << endl;
        }
        else
        {
            ans = factorial % 10000;

            if (ans > 0 && ans < 10)
            {
                cout << ans << endl;
            }
            else if (ans >= 10 && ans < 100)
            {
                cout  << ans << endl;
            }
            else if (ans >= 100 && ans < 1000)
            {
                cout << ans << endl;
            }
            else if (ans >= 1000 && ans < 10000)
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }
    else
    {
        cout << "0000" << endl;
    }
}

/**************************************/

/********** Main()  function **********/
int main()
{

    #ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    solve();

    return 0;
}