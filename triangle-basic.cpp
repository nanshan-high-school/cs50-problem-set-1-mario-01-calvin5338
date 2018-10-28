#include <iostream>
using namespace std;

int main()
{
  //height
  int h;
  cout << "請輸入三角形的高(1~8):";
  cin >> h;
  //alert (if)
  if(h <= 0 || h >= 9)
  {
    cout << "✘ 高不在範圍內";
  }
  //生成三角形 (else)
  else
  {
    for(int a = 1 ; a <= h ; a++)
    {
      //#
      for(int t = 0 ; t < a ; t++)
      {
        cout << "#";
      }
      //換行
      cout << "\n";
    }
    
  }
}
