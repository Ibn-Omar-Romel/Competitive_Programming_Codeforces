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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    int n , k , l , c , d , p , nl , np ;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toasts = (k * l) / nl ;
    int limes = c * d;
    int salt = p / np ;

    int ans = min(min(toasts , limes) , salt) / n ; 

    cout<<ans<<'\n';
    

    return 0;
}

