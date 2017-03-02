#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long int b;
    long long int c;
    char d;
    float e;
    double f;
    cin >> a >> b >> c >> d >> e >> f;
    cout.setf( std::ios::fixed, std:: ios::floatfield );
    cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f;
    return 0;
}