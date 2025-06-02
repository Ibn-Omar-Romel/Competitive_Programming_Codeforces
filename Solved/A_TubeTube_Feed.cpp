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

    int q;
    cin >> q;

    while( q-- ) {

        int n , t;
        cin >> n >> t;

        int length[n],ent[n];
        int no = 0;

        for( int i = 0 ; i < n ; i++ ){
            
            cin >> length[i];
            if(length[i] > t){

                no++;
            }
        }

        for( int i = 0 ; i < n ; i++ ){
            
            cin >> ent[i];

        }

        if(no == n){
            cout << "-1\n";
        }
        else{

            int position = 0;

            for ( int i = 0 ; i < n-1 ; i++ ){

                if(length[i] <= t){
                    
                    if(((length[i] == length[i+1]-1) || (length[i]-1 == length[i+1])) and ent[i] < ent[i+1] ){

                        position = i + 1;
                        t--;
                    }
                    else{
                        position = i;
                        t--;
                    }
                }
            }

            cout << position + 1 << '\n';
        }
    }




    return 0;
}