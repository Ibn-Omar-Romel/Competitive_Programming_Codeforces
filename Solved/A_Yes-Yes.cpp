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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    int n ;
    cin>>n;

    string s;
    char pre;
    int checker = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>s;

        pre = s[0];
        if(pre != 'Y' and pre != 'e' and pre != 's')
            cout<<"NO\n";
        else{
        for(int j = 1 ; j < s.size() ; j++) {

            if(pre == 'Y' and s[j] != 'e') {

                checker++;
                break;
            }
            else if(pre == 'e' and s[j] != 's') {

                checker++;
                break;
            }
            else if(pre == 's' and s[j] != 'Y') {

                checker++;
                break;
            }
            else if(pre != 'Y' and pre != 'e' and pre != 's'){
                checker++;
                break;
            }
            else{
                pre = s[j];
            }
        }

        if(checker == 0) {
            cout<<"YES\n";
            checker = 0;
        }
        else{
            cout<<"NO\n";
            checker = 0;
        }
    }
 

        }

   
    
    return 0;
}