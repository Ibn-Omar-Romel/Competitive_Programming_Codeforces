#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    cin>>s;

    int count = 0;

    for(int i = 0 ; i < s.size() ; i++) {

        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){

            cout<<"YES\n";
            count++;
            break;
        }

    }
    if(count == 0)
        cout<<"NO\n";
}