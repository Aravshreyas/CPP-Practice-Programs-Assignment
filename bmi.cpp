#include <iostream>
using namespace std;

int main() {
    float w, h, bmi;

    cout << "Enter your weight in kg: ";
    cin >> w;

    cout << "Enter your height in meters: ";
    cin >> h;

    bmi = (w / (h * h));

    cout << "Your BMI is: " << bmi << endl;

    
    return 0;
}
