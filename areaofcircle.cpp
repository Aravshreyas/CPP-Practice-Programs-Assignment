#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = M_PI * radius * radius;

    cout << "Area of the circle: " << area << endl;

    return 0;
}
