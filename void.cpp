#include <iostream>
using namespace std;
void hello(int);

int main() {
  int t;
  cout << "請輸入次數:";
  cin >> t;
  hello(t);
}

void hello(int times) {
  for(int i = 1 ; i <= times ; i++) {
    cout << "嘿~ 第" << i << "號同學~ \n";
  }
}
