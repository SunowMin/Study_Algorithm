#include <iostream>

using namespace std;

int main(void) {
    int leng, nume=0, num2 = 0;
    char s[1000000];

    cin >> leng;
    cin >> s;

    for (int i = 0; i < leng; i++) {
        if (s[i] == 'e') {
            nume++;
        }
        else if (s[i] == '2') {
            num2++;
        }
    }
    
    if (nume > num2) cout << "e";
    else if (num2 > nume) cout << "2";
    else cout << "yee";


    return 0;
} 