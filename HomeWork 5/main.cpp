#include <iostream>
#include "Vector2.hpp"
using namespace std;

int main() {
    Vector2 a(2.0, -2.0);
    Vector2 b(1.0, 2.0);
    double k = 10.0;

    cout << a.PSK().first << " " << a.PSK().second;
    return 0;
}