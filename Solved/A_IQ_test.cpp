#include <iostream>
#include <vector> 
#include <iterator> 
#include <algorithm>


using namespace std;

int main() {

    int n , odd = 0, even = 0, index = 0, in;
    cin>>n;
    vector<int> v;
    
    int arrayO[n];
    int arrayE[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        v.push_back(in);

        if(v[i] % 2 == 0){
            arrayE[even] = v[i];
            even++;
        }

        else{

            arrayO[odd] = v[i];
            odd++;
        }

    }

    if(odd == 1){

        int index = distance(v.begin(), find(v.begin(), v.end(), arrayO[0]));
        cout << index + 1 <<'\n';
    }
    else if (even == 1) {

        int index = distance(v.begin(), find(v.begin(), v.end(), arrayE[0]));
        cout << index + 1 <<'\n';
    }
}