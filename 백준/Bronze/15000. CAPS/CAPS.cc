#include <iostream>
#include <string>
using namespace std;

int main() {

    //소문자->대문자는 -=32해주면 된다.
    string c;
    cin >> c;

    for (int i=0;i<c.size();i++){
        c[i] -= 32;
    }

    cout <<c;
    return 0;

}