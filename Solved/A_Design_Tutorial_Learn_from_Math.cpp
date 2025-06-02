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

    int first_checker = 0 , second_checker = 0 ;

    int done = 0;

    int A = round(t / 2);
    int B = round(t / 2);

    if( A + B != t)
        B = B + 1;


    while(done < 3) {

            for (int i = 2; i < 9; i++)
            {
                if( A % i == 0 and first_checker == 0 and A != i){
                    first_checker++;
                    done++;
                }
                
                if( B % i == 0 and second_checker == 0 and B != i){
                    second_checker++;
                    done++;
                }
            }

            if(done >= 2) {
                break;
            }
            else{
                A -= 1;
                B += 1;
                done = 0;
                first_checker = 0;
                second_checker = 0;
            }


    }
    

    cout<<A<<" ";
    cout<<B<<'\n';

    return 0;
}

