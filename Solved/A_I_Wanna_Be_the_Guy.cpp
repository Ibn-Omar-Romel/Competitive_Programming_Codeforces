#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, m, o, count = 1;
    int array[201];

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> array[i];
    }
    cin >> o;
    for (int i = m; i < m + o; i++)
    {
        cin >> array[i];
    }

    if (m == 0 and o == 0)
        cout << "Oh, my keyboard!\n";
    else
    {

        sort(array, array + m + o);

        for (int i = 0; i < m + o - 1; i++)
        {

            if (array[i] < array[i + 1])
                count++;
        }

        if (count == n)
            cout << "I become the guy.\n";
        else
            cout << "Oh, my keyboard!\n";
    }
}