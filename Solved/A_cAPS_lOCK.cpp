#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    int count = 0;
    cin>>s;
    char ch[s.size()];
    for(int i = 0 ; i < s.size() ; i++) {
        if(i == 0 and s[i]>='a' and s[i]<='z'){
            
            ch[i] = toupper(s[i]);
            count++;
            
        }
        else if (s[i]>='A' and s[i]<='Z'){
            ch[i] = tolower(s[i]);
            count++;
        }
        else if(count > 0 and s[i]>='a' and s[i]<='z'){
            count = 0;
            break;
        }
        
    }
    if(count == 0)
        cout<<s<<'\n';
    else{
        for(int i = 0 ; i < s.size() ; i++) {
            cout<<ch[i];
        }
        cout<<'\n';
    }

}