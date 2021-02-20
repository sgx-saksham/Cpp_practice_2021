// Default values of enumeration are changed
#include <iostream>
using namespace std;

enum seasons
{
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

int main()
{

    seasons s;

    s = winter;
    cout << "Winter = " << s << endl;

    return 0;
}