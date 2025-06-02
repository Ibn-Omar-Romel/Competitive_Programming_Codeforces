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

#define ll long long int
#define vec vector
#define st string

int main(){
    int size,d;
    cin>>size>>d;
    int cont = 0;
    int maxCount = 0;
    for (int i = 0; i < d; ++i) {
        string str;
        cin>>str;
        if (str.find("0")!=string::npos){
            cont++;
        } else{
            cont = 0;
        }
        if (maxCount<cont){
            maxCount = cont;
        }
    }
    cout<<maxCount;
}