#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(void) {
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string alpha;
        getline(cin, alpha);
        int vowels = 0, cons = 0;

        for (char al : alpha) {
            if (al == ' ')
                continue;

            switch (al) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                if(isalpha(al)) cons++;
                break;
            }
        }
        cout << cons << " " << vowels << "\n";
    }

    return 0;
} 