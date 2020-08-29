#include <iostream>

using namespace std;

int main()
{
    int hour, min;
    cin >> hour >> min;

    if(min >= 45)
    {
        cout << hour << " " << min - 45 << endl;
    }
    else
    {
        if(hour == 0)
        {
            cout << "23 " << 60 - (45 - min) << endl;
        }
        else
        {
            cout << hour - 1 << " " << 60 - (45 - min) << endl;
        }
    }

    return 0;
}