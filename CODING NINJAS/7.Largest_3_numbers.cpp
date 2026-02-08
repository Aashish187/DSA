#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; 
  //checks if a is the greatest
    if (a >= b && a >= c) {
        cout << a;
      // checks if b is the greatest
    } else if (b >= a && b >= c) {
        cout << b;
      // if both a and b are not greatest then c is
    } else {
        cout << c;
    }
    return 0;
}
