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

    int i,j,k;
    int n,x,sum=0;

    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
    }

    sum=abs(sum);

    if(sum==0)
        cout<<"0";

    else if(sum<=x)
        cout<<"1";

    else
    {
        if(sum%x==0)
            cout<<sum/x;
        else
            cout<<(sum/x+1);
    }

    return 0;
}