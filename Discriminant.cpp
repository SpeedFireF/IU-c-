#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    int D;

    cin >> a >> b >> c;
    D = (b * b) - (4 * a * c);

    if (D == 0){
        cout << b << a << D << endl;
        cout << -b / (2 * a);
    }
    else
        if (D > 0) {
        double x1, x2;
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << x1 << endl;
        cout << x2;
    }
        else {
            cout << "No roots" << endl;
        }
}
