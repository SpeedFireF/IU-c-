#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    double s1, s2, s3, p;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    s1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    s2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    s3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    p = (s1 + s2 + s3) / 2;
    cout << p << endl;
    cout << sqrt(p * (p - s1) * (p - s2) * (p - s3));

}