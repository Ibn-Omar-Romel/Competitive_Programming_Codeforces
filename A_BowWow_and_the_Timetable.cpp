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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // ll n;

    // n = stoi( s , 0, 2 );

    // cout << ceil ( ( double ) (log2(n) / log2(4)) ) << '\n';

    ll l = s.size();

    ll n = count ( s.begin(), s.end(), '1');

    if ( n > 1 ) cout << ceil( (double)(l) / (double)2) << '\n';
    else cout <<  ceil( (double)(l-1) / (double)2) << '\n';

    
    return 0;
}
