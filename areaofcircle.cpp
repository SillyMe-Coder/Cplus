#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Enter the radius of Circle: ";
    double radius;
    cin >> radius;
    double area = 3.14 * pow(radius , 2);
    
    cout << area << endl;

    return 0;
}