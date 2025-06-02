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
    
    ll t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;

        ll col = (x/n);
        if(x%n != 0)col++;
        ll row = x % n;
        if(row == 0)row = n;

        ll ans = ((row - 1) * m) + col;

        cout<<ans<<endl;

    }
    return 0;
}