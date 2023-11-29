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
void solve()
{
    string str;
    int count = 0;

    getline(cin, str);

    int len = str.size();

    int first = len % 3 - 1;

    if (len > 3)
    {
        for (int i = 0; i < len; i++)
        {
            cout << str[i];
            if (first == i)
            {
                printf(",");
            }
            if (i > first)
            {
                count += 1;
                if (count == 3 && i != (len - 1))
                {
                    cout << ",";
                    count = 0;
                }
            }
        }
    }
    else{
        cout<<str;
    }

    cout << endl;
}

/**************************************/

/********** Main()  function **********/
int main()
{

#ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
#endif

    solve();

    return 0;
}