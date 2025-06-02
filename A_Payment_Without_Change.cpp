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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++

int main ( ) {

    
    int t;
    cin>>t;

    while( t-- ) {

        ll a,b,n,s;
        cin >> a >> b >> n >> s ;

        ll sum = 0 ;

        ll d = s / n;

		d = min(d, a);

		if (s - n * d <= b) {

			yes;

		}
        else {

			no;
		}
    }
    
    return 0;

}