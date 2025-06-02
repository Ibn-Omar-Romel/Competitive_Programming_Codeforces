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

    int n;
    cin >> n ;

    vector < pair < int , int > > vec(n);

    for ( int i = 0 ; i < n ; i++ ) {


        int a, b;
        cin >> a >> b;

        vec[i].first = a;
        vec[i].second = b;
    }
    

    int count = 0, leftcheck = 0, rightcheck = 0 , upcheck = 0, downcheck = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {


        for ( int j = 0 ; j < n ; j++ ) {

            if ( i == j ) continue;
            else {

                if ( (vec[i].first == vec[j].first ) and ( vec[i].second < vec[j].second ) ) {

                    upcheck++;
                }
                else if ( (vec[i].first == vec[j].first ) and ( vec[i].second > vec[j].second ) ) {

                    downcheck++;
                }
                else if ( (vec[i].first < vec[j].first ) and ( vec[i].second == vec[j].second ) ) {

                    leftcheck++;
                }
                else if ( (vec[i].first >= vec[j].first ) and ( vec[i].second == vec[j].second ) ) {

                    rightcheck++;
                }
            }
        }

        if ( leftcheck != 0 and rightcheck != 0 and upcheck != 0 and downcheck != 0 ) {

            count++;
            leftcheck = 0, rightcheck = 0 , upcheck = 0, downcheck = 0;
        }
        else {

            leftcheck = 0, rightcheck = 0 , upcheck = 0, downcheck = 0;
        }
    }

    cout << count << '\n';

    
    return 0;
}
