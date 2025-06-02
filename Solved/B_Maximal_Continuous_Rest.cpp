
#include <iostream>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[t*2];

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        arr[i] = n;
        arr[t + i] = n;
    }
    int x = 0, y = 0;

    for (int i = 0; i < t * 2; i++)
    {
        if (arr[i] == 1)
        {
            x++;
            
        }
        else if (arr[i] == 0 and y < x)
            {
                y = x;
                x = 0;
            }
            else
            {
                x = 0;
            }
    }

    cout << y;

    return 0;
}
