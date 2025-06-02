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

    string s1, s2;
    int n ;

    int count = 0;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>s1>>s2;

        for (int j = 0; j < s1.size(); j++)
        {
            if(s1[j] != s2[j]){

                if((s1[j] == 'B' and s2[j] == 'G') or (s1[j] == 'G' and s2[j] == 'B')){
                    continue;
                }
                else{
                    count++;
                    break;
                }
            }
        }

        if(count == 0 ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        count = 0;
    }
    


    return 0;
}