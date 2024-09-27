#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //2
    /*
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;

    double result = pow(x, y);

    cout << "The result is: " << x << " in pow " << y << " equals " <<result << endl;
    */

    /*
    //3
    int sum = 0;
    int count = 1000;

    for (int i = 0; i <= 1000; i++) {
        sum += i;
    }
    double avarage = static_cast<double>(sum) / count;
    cout << "AVG: " << avarage << endl;
    */

    //1
    /*
    int a, sum = 0;

    cout << "a: ";
    cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }
    cout << "sum from " << a << " to 500 = " << sum << endl;
    */

    //4

    int a;
    long long product = 1;

    cout << "Enter the value of a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Invalid input. The value of a must be between 1 and 20." << endl;
        return 1;
    }

    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    cout << "The product of all integers from " << a << " to 20 is " << product << endl;

    //5
    /*
    int k;

    cout << "Variant (value k): ";
    cin >> k;

    for (int i = 2; i <= 10; ++i) {
        cout << k << " x " << i << " = " << k * i << endl;
    }

    return 0;
    */
}