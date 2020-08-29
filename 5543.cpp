#include <iostream>

using namespace std;

int main()
{
    int burger1, burger2, burger3, cola, cider;
    cin >> burger1 >> burger2 >> burger3 >> cola >> cider;

    int min_burger = min(burger1, min(burger2, burger3));
    int min_drink = min(cola, cider);

    cout << min_burger + min_drink - 50 << endl;

    return 0;
}