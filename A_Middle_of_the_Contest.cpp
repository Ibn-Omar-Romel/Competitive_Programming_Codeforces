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

    int h1, h2, h3, h4, h5, m1, m2, m3;
    char c ;

    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    h3 = ( h1 * 60 ) + m1;

    h4 = ( h2 * 60 ) + m2;

    h5 = ( h3 + h4 ) / 2;

    int h = h5 / 60;
    int m = h5 % 60;

    if( h > 9 && m > 9 ) {

        cout << h << ":" << m << '\n';
    }
    else{

        if( h < 10 ) {

            cout<<0;
        }
        cout << h << ":" ;

        if( m < 10 ) {

            cout<<0;
        }
        
        cout<<m<<endl;
    }

    return 0;
}
