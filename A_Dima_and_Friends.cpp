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

    int n,m,i,sum;

    while( cin>>n ) {

        sum=0;
        
        for( i = 0 ; i < n ;i++ ) {

            cin>>m;
            sum+=m;
        }

        int f = n + 1 , cnt = 0 ;

        for ( i = sum + 1 ; i <= sum + 5 ; i++ ) {

            if ( i % f == 1 ) {

                cnt++;
            }
        }
        cout << 5 - cnt << endl;
    }
    return 0;
}