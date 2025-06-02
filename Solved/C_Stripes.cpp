//হাড় হইলো জড়োজড়ো
//অন্তর হইল পোড়া রে
//আমার অন্তর হইল পোড়া

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

        char arra[8][8];

        int check = 0, got = 0;
        char ans ='B';

        for(int i = 0 ; i < 8 ; i++) {

            for ( int j = 0 ; j < 8 ; j++ ) {

                cin >> arra[i][j];

                if(arra[i][j] == 'R'){
                    check++;
                }
            }

            if(check == 8 and got == 0){
                ans = 'R';
                got++;
            }
            check = 0;
        }

        if(ans == 'B'){
            cout << "B\n";
        }
        else{
            cout << "R\n";
        }

    }


    return 0;
}
