/*

A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

*/












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

