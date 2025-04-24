#include <iostream>
using namespace std;

// Function prototype
void basicDataTypes();

int main() {
  basicDataTypes(); // Call the function
  return 0;         // Return 0 to indicate successful execution
}

void basicDataTypes()
{
  // Data Types
  /*
   * boolean	1 byte	Stores true or false values
   * char	1 byte	Stores a single character/letter/number, or ASCII values
   * int	2 or 4 bytes	Stores whole numbers, without decimals
   * float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal
   * digits double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15
   * decimal digits
   */
  int a = 5;           // Integer
  float b = 5.5;       // Float
  double c = 5.555555; // Double
  char d = 'A';        // Character
  string e = "Hello";  // String

  cout << "Integer: " << a << endl;
  cout << "Float: " << b << endl;
  cout << "Double: " << c << endl;
  cout << "Character: " << d << endl;
  cout << "String: " << e << endl;

  // Type Casting
  int x = 10;
  float y = (float)x; // Implicit type casting
  cout << "Implicit Type Casting: " << y << endl;

  float z = 10.5;
  int w = (int)z; // Explicit type casting
  cout << "Explicit Type Casting: " << w << endl;
}