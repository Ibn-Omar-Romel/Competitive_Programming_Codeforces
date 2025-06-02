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

        int n;
        cin >> n;

        n = n - 1;
        int A = 1 , B = 0;
        
        int count = 0;
        int i = 2 ;

        while(n > 0) {

            if(count == 0){

                if(n-i >= 0 ){
                    B = B + i;
                    n = n - i;
                    i++;
                }else{
                    B = B + n;
                    break;
                }
                
                if(n - i >= 0 ) {
                    B = B + i;
                    n = n - i;
                    i++;
                }else {
                    B = B + n;
                    break;
                }
                count = 1;
            }
            else{
            
                if(n-i >= 0 ){
                    A = A+ i;
                    n = n - i;
                    i++;
                }else{
                    A = A + n;
                    break;
                }
                
                if(n - i >= 0 ) {
                    A = A + i;
                    n = n - i;
                    i++;
                }else {
                    A = A + n;
                    break;
                }
                count = 0;
            }

        }

        cout << A << " " << B << '\n';

    }

    return 0;
}
