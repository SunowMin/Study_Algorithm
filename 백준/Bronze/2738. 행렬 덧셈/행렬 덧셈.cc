#include <iostream>
using namespace std;

int main()
{
    int n, m, num = 0;
    cin >> n >> m;

    int array[100][100] = { 0 };

    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> num;
                array[i][j] += num;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}