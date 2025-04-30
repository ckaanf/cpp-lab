#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string str;
    int n;

    cin >> str >> n;
    for (int i = 0; i < n; i++)
    {
        cout << str;
    }

    std::ostringstream os;
    for (int i = 0; i < n; i++)
    {
        os << str;
    }
    cout << os.str() << endl;
    return 0;
}
