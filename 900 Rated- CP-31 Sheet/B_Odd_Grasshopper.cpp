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

int main() {
    
    ll n;  ll step=0; ll p=1;
    cin>>n;
    while(n--){
        ll x,n;
        cin>>x>>n;
        ll remen=n-(n%4)+1;
        while(remen<=n){
            if(x%2==0)
                x-=remen;
            else
                x+=remen;

                remen++;

        }
        cout<<x<<'\n';
    }

    return 0;

}