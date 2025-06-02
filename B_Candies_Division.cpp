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
    long long int t,n,k,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%k==0)
            cout<<n<<endl;
        else
        {
            a=n/k*k;
            cout<<min(n,a+k/2)<<endl;
        }
    }
    return 0;
}