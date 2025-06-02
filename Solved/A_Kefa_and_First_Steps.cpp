#include<iostream>

using namespace std;

int main() {

    int n ,count = 0 , min = 0, ans = 0;
    cin>>n;

    int array[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>array[i];
        if(min <= array[i]){
            count++;
            min = array[i];
        }
        else
            {
                if(count > ans)
                    ans = count;
                count = 1;
                min = array[i];
            }

    }

    if(count >= ans)
      cout<<count<<'\n';
    else
      cout<<ans<<'\n';
}