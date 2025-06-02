#include<iostream>
#include<string>

using namespace std;

int main() {

    string s, t;
    cin>>s>>t;

    int romo = 0 ;

    for(int i = 0 , j = s.size()-1 ; i < s.size() ; i++,j--) {

        if(s[i] != t[j]) {
            romo++;
            cout<<"NO\n";
            break;   
        }
    }
    if(romo == 0) 
        cout<<"YES\n";
}