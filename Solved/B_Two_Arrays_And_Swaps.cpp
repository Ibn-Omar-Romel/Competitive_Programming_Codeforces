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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n , k;
        cin >> n >> k;


        int a[n];
        int b[n];

        int sum = 0;
        for( int i = 0 ; i < n ; i++ ) {

            cin >> a[i];
            sum = sum + a[i];

        }
        sort(a,a+n);

        for( int i = 0 ; i < n ; i++ ) {

            cin >> b[i];
        }
        sort(b,b+n);

        int  count = 0;
        int i = 0 , j = n - 1;


        if( k == 0 ) {

            cout << sum << '\n';
        }
        else{

            while( i < n && j >= 0){

                if( a[i] < b[j]){
                    
                    sum = sum - a[i] + b[j];
                    swap(a[i],b[j]);
                    i++;
                    j--;

                    count++;
                }
                else{


                    if( a[i + 1] == b[j] ){

                        i++;
                        j--;
                    }
                    else if( a[i+1] < b[j] ){

                        i++;
                    }
                    else if( a[i+1] > b[j]){
                        
                        j--;
                    }
                }

                if( count >= k){
                    break;
                }
                
            }
            cout << sum << '\n';
        }
        
        
    }
    
    return 0;
}