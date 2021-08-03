#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c and b + c > a and a + c > b){
        cout << "Существует";
    }
    else {
        cout << "Не существует";
    }
}