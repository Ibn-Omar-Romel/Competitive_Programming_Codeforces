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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,count=0,max=0;
    map<ll,ll> mp;

    cin>>n;n*=2;
    ll a[n];


    for(i=0;i<n;i++)
        cin>>a[i];


    for(i=0;i<n;i++)
    {
        if(mp[a[i]]==0)
        {
            count++;mp[a[i]]++;
            if(count>max)
                max=count;
        }

        else
        {
            mp[a[i]]--;
            count--;
        }

    }

    cout<<max<<endl;

    return 0;
}