#include <iostream>
using namespace std;

template<typename T>
T sum(T a, T b)
{
    return a + b;
}
int main()
{
    cout << sum(3, 4) << endl;     //int değerler için de işlem yapabiliyor
    cout << sum(3.2, 4.7) << endl; //Float değerler için işlem yapabilio muazzam ötesi

    /* Yani compiler her tip için (int, float...) ayrı fonksiyon üretir */
    
}

