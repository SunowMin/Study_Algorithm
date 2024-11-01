#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    int t;
    cin >> t;
    getchar();

    for(int i=0; i<t; i++){

        getline(cin,s);
        int count_i =0 , count_j = 0;

        for (int j=0;j<s.size();j++){

            switch (s[j]) {

                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    count_i ++;
                    break;
                case ' ':
                    break;
                default:
                    count_j ++;
                    break;

            }


        }

        cout << count_j << " " << count_i << endl;

    }


}