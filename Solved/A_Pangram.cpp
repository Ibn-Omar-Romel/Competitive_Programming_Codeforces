#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int n ; 
    cin>>n;

    string s;
    cin>>s;
    int value = 0, check = 0;;
    int temp[26] = {0};
    char ch;

    if(s.size() < 26)
        cout<<"NO\n";
    else {

        for(int i = 0 ; i < s.size() ; i++) {
            ch = toupper(s[i]);
            value = (int)ch - 65;
            temp [value] = 1;
        }

        for(int i = 0 ; i < 26 ; i++) {

            if(temp[i] == 0){
                cout<<"NO\n";
                check ++;
                break;
            }
        }

        if(check == 0)
            cout<<"YES\n";

        
    }
}