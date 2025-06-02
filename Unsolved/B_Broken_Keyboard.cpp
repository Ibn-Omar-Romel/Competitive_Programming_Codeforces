#include<iostream>
#include<string.h>

using namespace std;

int main() {

    int t, n, count = 0;
    string s;

    cin>>t;
    if(1 <= t and t <= 100) {

        for(int i = 0 ; i < t ; i++) {

            cin>>n;
            cin>>s;

            if(n==1)
                cout<<"YES\n";
            else if(n==2)
                cout<<"NO\n";

            else if(3<= n and n <= 100) {

                int i = 1;
                while(i<n){
                    if (s[i] != s[i+1]){
                        cout<<"NO\n";
                        count++;
                    }
                    i = i + 3;
                }
                if(count == 0)  
                cout<<"YES\n";
            }

            
        }
    }

    return 0;
}