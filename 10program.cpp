#include <iostream>
using namespace std;
class yahoo
{
  private:
  static int n;
  public:
  yahoo()
  {
    n++;
  }
  static void show()
  {
    cout<<"You have created "<<n<<" object so far. "<<endl;
  }
};
int yahoo::n = 0;
int  main()
{
    yahoo::show();
    yahoo x,y;
    x.show();
    yahoo z;
    x.show();
    getc;
}