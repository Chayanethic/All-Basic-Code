#include <bits/stdc++.h>
using namespace std;

int decimalTobinary(int decimalN)
{
  int ans = 0; // bit number
  int pow = 1; // 10^0

  while (decimalN > 0)
  {
    int rem = decimalN % 2;
    decimalN = decimalN / 2;

    ans = ans + (rem * pow);
    pow = pow * 10;
  }
  return ans;
}

int binaryTodecimal(int binaryN)
{
  int ans = 0;
  int pow = 1; // 2^0

  while (binaryN > 0)
  {
    int rem = binaryN % 10;
    ans = ans + (rem * pow);
    binaryN = binaryN / 10;
    pow = pow * 2;
  }
  return ans;
}

int main()
{
  int n = 101010;

  cout << binaryTodecimal(n);
}
