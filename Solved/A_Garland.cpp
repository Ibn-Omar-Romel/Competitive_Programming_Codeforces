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

    while(t--){

        string s;
        cin >> s;

        int i = 0;
        while(true){

            if(s.find_first_not_of(s[0]) == string::npos){
                cout << "-1\n";
                break;
            }
            else if((s[i] != s[i+1]) && (s[i] != s[i+2]) && (s[i] != s[i+3]) && (s[i+1] != s[i+2]) && (s[i+1] != s[i+3]) && (s[i+2] != s[i+3])){
                cout << "4\n";
                break;
            }
            else{

                sort(s.begin(), s.end());

                int count = 1;

                for(int i = 0 ; i < s.length() - 1 ; i++){
                    
                    if(s[i] != s [i+1]){
                        count++;
                    }
                }

                if(count == 3){
                    cout << "4\n";
                    break;                    
                }


                else if(count == 2){

                    if((s[i] == s[i+1]) and (s[i+2] == s[i+3])){

                        cout << "4\n";
                        break;
                    }
                    else{
                        cout << "6\n";
                        break;
                    }
                }

            }
        }
    }


    return 0;
}
