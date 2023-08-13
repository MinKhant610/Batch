#include <iostream>
using namespace std;

int plusFunc(int x) {
  return x;
}

int plusFunc(int x, int y) {
  return x + y;
}

int main() {
  int result = plusFunc(10);
  int result2 = plusFunc(10, 20);

  cout << result << endl;
  cout << result2 << endl;
  return 0;
}
