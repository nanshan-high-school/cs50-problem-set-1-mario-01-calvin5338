#include <iostream>
using namespace std;

int main() {
  int money;
  cout << "請輸入逾換算金額:";
  cin >> money;
  
  cout <<">> 50元有:" << money/50 <<"個\n";
  cout <<"   10元有:" << money%50/10 <<"個\n";
  cout <<"    5元有:" << money%50%10/5 <<"個\n";
  cout <<"    1元有:" << money%50%10%5 <<"個";
  }
