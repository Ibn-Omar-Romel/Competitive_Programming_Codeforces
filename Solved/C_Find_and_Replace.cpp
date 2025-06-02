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
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t--) {

        int size;
        cin >> size;
        string s;
        cin >> s;

        int state = 0, count = 0 ,check = 0;

        int letter[26];

        for(int i = 0 ; i < 26 ; i++){
            
            letter[i] = -1;
        }


        for(int i = 0 ; i < s.length() ; i++) {

            char c = s[i];
            int index = int(c) - 97;

            if(count % 2 == 0){
                state = 0;
                count++;
            }
            else{
                state = 1;
                count++;
            }

            if( letter[index] == -1){
                letter[index] = state;
            }
            else if (letter[index] != state){
                check++;
                break;
            }
            else{
                continue;
            }
        }

        if(check == 0){
            cout<<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}

