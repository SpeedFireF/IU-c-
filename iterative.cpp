#include <iostream>
using namespace std;
int main ()
{
    int a = 1, b = 1, c = 2, n;
    cin >> n;
    if(n <= 2){
        cout << 1;
    }
    else{
        for(int i = 3; i <=  n; i++){
          c = a + b;
         a = b;
         b = c;
      }
    cout << c;
    }

}