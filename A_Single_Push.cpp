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

    while( t-- ) {

        int n ;
        cin >> n;

        int arra1[n];
        int arra2[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra1[i];
        }
        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra2[i];
        }

        int flag = 0 , dif = 0, newDIf = 0 ;
        int check = 0 ;

        for ( int i = 0 ; i < n ; i++ ) {


            if ( arra1[i] > arra2[i] ) {

                flag = 1;
                break;
            }

            else if ( arra1[i] != arra2[i] and check <= 1 ) {

                dif = newDIf;
                
                newDIf = arra2[i] - arra1[i];

                if ( dif != newDIf and check != 0 ) {

                    flag = 1;
                    break;
                }
                check = 1;

                //cout << dif << " " << newDIf << '\n';
            }

            else if ( check == 1 and arra1[i] == arra2[i] ) {

                check = 2;
            }

            else if ( arra1[i] != arra2[i]  and check == 2 ) {

                flag = 1;
                break;
            }
        }

        if ( flag == 1 ) {no;}
        else yes;
    }
    return 0;
}
