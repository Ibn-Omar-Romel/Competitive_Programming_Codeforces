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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n;

    pair < int , int > p[n];

    int flag = 0 , check = 1;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> p[i].first >> p[i].second;

        if ( p[i].first != p[i].second ) flag = 1;

        else if ( i > 0 and ( p[i].first == p[i].second ) and p[i].first <= p[i-1].first ) check ++;
    }

    if( flag == 1 ) cout << "rated\n";
    else if ( check == n ) cout << "maybe\n";
    else cout << "unrated\n";
    
    return 0;
}
