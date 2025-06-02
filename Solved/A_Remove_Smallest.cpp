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

    while(t--) {

        int size, check = 0;
        cin >> size;
        int arra[size];

        for(int i = 0 ; i < size ; i++) {

            cin >> arra[i];
        }

        if(size == 1){
            cout << "YES\n";
        }
        else{

            sort(arra, arra + size);

            for(int i = 0 ; i < size - 1 ; i++){
                
                if( arra[i + 1] - arra[i] > 1){
                    check++;
                    break;
                }
            }

            if( check == 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}

