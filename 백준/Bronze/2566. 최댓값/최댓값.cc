#include <iostream>
using namespace std;

int main()
{
    int num, max = -1, iData, jData;
    int array[9][9] = { 0 };


    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> num;
            if (num > max) {
                max = num;
                iData = i;
                jData = j;
            }
        }
    }

    cout << max << endl << iData + 1 << " " << jData + 1;

    return 0;
}