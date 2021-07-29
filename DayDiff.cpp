#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int DayDiff(long  begin, long end, int &diff)
{
  vector<int> a;
  vector<int> b;

  int  y1 = 0, m1 = 0, d1 = 0;
  int  y2 = 0, m2 = 0, d2 = 0;
  
  a.push_back(begin/10000);
  a.push_back((begin % 10000) / 100);
  a.push_back(begin % 100);

  b.push_back(end/10000);
  b.push_back((end % 10000) / 100);
  b.push_back(end % 100);

  m1 = (a[1] + 9) %12;
  y1 = a[0] - m1/10;
  d1 = 365*y1 + y1/4 - y1/100 +y1/400 + (m1 * 365 + 5)/10 + a[2] - 1;
 
  m2 = (b[1] + 9) %12;
  y2 = b[0] - m2/10;
  d2 = 365*y1 + y2/4 - y2/100 +y2/400 + (m2 * 365 + 5)/10 + b[2] - 1;

  diff = d2 - d1;
  cout << "d2:" << d2 << " d1:" <<d1 << endl;

  return 0;
}


int main()
{
  long a = 20210729;
 long  b = 20210820;

 int c = 0;
 
 DayDiff(a,b, c);
  cout << "diff=" << c << endl;

  return 0;
 
}
