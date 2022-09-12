#include <iostream>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if (a < b)
    cout << a << " " << b << " " <<c;
  else 
    cout << b << " " << a;

  return 0;
}