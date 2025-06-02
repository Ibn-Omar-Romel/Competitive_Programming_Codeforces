#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

#define ll long long int
#define vec vector
#define st string

int main()
{
    ll a,b,c,d,e = 0,f = 0;
    cin>>a>>b>>c>>d;
    if(a > b){
        swap(a,b);
        if(a > c){
            swap(a,c);
        }
    }
    if(b > c){
        swap(b,c);
        if(a > b){
            swap(a,b);
        }
    }

    ll ans = 0;
    e = b - a;
    f = c - b;
    if(e < d){
        ans += d - e;
    }
    if(f < d){
        ans += d - f;
    }
    cout<<ans<<endl;

    return 0;
}