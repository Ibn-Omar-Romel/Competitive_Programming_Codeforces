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

    int t;
    cin>>t;

    string s, main;
    int size;

    for(int i = 0 ; i < t ; i++) {

        cin>>size;

        cin>>s;

        for(int j = s.length() - 1 ; j >= 0  ; j--) {

            if(s[j] == '0'){

                main = main + (char) (((s[j-2] - '0')*10 + s[j-1] - '0' ) + 96);

                j -= 2;
            }

            else{

                main = main + (char) ((s[j] - '0')+96);
            }
        }

        reverse(main.begin(), main.end());
        cout<<main<<'\n';

        main = "";

    }

    return 0;
}

