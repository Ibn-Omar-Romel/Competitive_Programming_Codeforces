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
    
    //freopen("input.txt","r", stdin);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] > a[j]){
                    ans++;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}