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

    int t;
    cin >> t;

    vector < pair < int , int > > p(t);

    int count = 1 , max = 1;

    for ( int i = 0 ; i < t ; i++ ) {

        cin >> p[i].first >> p[i].second;

        if ( i > 0 and p[i-1].first == p[i].first and p[i-1].second == p[i].second ) {

            count++;
        }
        else {

            if ( max < count ) max = count ;

            count = 1 ;
        }
    }

    if ( max < count ) max = count;

    cout << max << '\n';
    return 0;
}
