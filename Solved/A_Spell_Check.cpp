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

    int n ;
    string s,s1= "Truim";

    sort(s1.begin(), s1.end());

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>s;

        sort(s.begin(), s.end());

        if(s == s1)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }


    }
    

    return 0;
}