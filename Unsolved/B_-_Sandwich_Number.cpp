#include<iostream>
#include<string>

using namespace std;

int main() {

    string s ;
    cin>>s;
    int count = 0;
    if(s[0]<='A' and s[0]>= 'Z'){
        count++;
        cout<<"No\n";
    }
        
    else if(s[s.size()-1] <= 'A' and s[s.size()-1] <= 'Z') {
        count++;

        cout<<"No\n";
    }
    else{
        for(int i = 1 ; i < s.size()-1 ; i++) {

            if(i == 1){
                
                if(s[i]>='1' and s[i] <= '9')
                    continue;
                else{
                    cout<<"No\n";
                    count++;
                    break;

                }
            }
            else{
                if(s[i]>='0' and s[i] <= '9')
                    continue;
                else{
                    cout<<"No\n";
                    count++;
                    break;
                }

            }
        }
    }

    if(count == 0){
        cout<<"Yes\n";
    }   



}