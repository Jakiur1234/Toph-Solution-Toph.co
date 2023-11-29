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
void solve(int n){
    int numbers[50];

    numbers[0] = 1;
    numbers[1] = 1;

    if(n == 1){
        cout<<numbers[0]<<endl;
    }
    else if(n ==2){
        cout<<numbers[1]<<endl;
    }
    else{
        for(int i = 2; i < n; i++){
            numbers[i] = numbers[i-1] + numbers[i - 2];
        }
    }

    cout<<numbers[n-1]<<endl;
}

/**************************************/

/********** Main()  function **********/
int main()
{

    #ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n; 
    cin>>n;
    solve(n);

    return 0;
}