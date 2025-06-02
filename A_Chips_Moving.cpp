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
    int n;
    ll a,coin = 0,odd = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a % 2 == 1){
            odd++;
        }
    }
    coin = min(odd,n-odd);
    cout<<coin<<endl;

    return 0;
}