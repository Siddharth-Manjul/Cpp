#include <iostream>
using namespace std;

int main() {
          int amount1;
          cout << "First Amount is $";
          cin >> amount1;

          int amount2;
          cout << "Second Amount is $";
          cin >> amount2;

          int sum = amount1 + amount2;
          cout << "The total amount is $" << sum << endl;
          return 0;
}