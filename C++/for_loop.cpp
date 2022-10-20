#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    string arr[10] = {"", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++) {
        
            if(i <= 9)
                cout << arr[i] << endl;
            else {
                for(int c = 10; c <= b; c++) {
                    if(c%2 == 0)
                        cout << "even" << endl;
                    else
                        cout << "odd" << endl;  
                }
                break;
            }
        
    }
    return 0;
}

