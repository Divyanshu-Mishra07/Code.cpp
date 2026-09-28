#include <iostream>
using namespace std;
int main()
{
    int p_sal, c_sal;
    cout << "Enter previous salary " << endl;
    cin >> p_sal;
    cout << "enter current salary" << endl;
    cin >> c_sal;
    float hike = c_sal - p_sal;
    float hk1 = (hike / p_sal) * 100;
    cout << "the hike % is" << hk1 << endl;
    return 0;
}
