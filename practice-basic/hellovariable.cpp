#include <iostream>
using namespace std;

int main() {
    // Variable Declaration
    int a = 5; // Integer variable
    float b = 3.14; // Float variable
    char c = 'A'; // Character variable
    string d = "Hello"; // String variable

    // Print Variables
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "String: " << d << endl;

    // Mutiple Variable Declaration
    int x = 10, y = 20, z = 30; // Multiple integer variables
    float p = 1.1, q = 2.2, r = 3.3; // Multiple float variables
    char m = 'X', n = 'Y', o = 'Z'; // Multiple character variables
    string s1 = "One", s2 = "Two", s3 = "Three"; // Multiple string variables

    int x,y,z;
    x = y = z = 10;

    // Const Variable Declaration similar to final in Java
    const int myNum = 15;

    /*
    * does not work
    * error: 'myNum1' cannot be assigned to 'const' variable
    *   const int myNum1
        myNum1 = 15;
    */
  
    return 0;
}