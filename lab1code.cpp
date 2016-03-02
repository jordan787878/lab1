#include <iostream>
using namespace std;
int main(void)
{

   int n;
   cout << "enter an integer ";
   cin >> n;
   cout << n <<  " ";
  while (n>1)
  {
    int a=n%2;
    
    if (a==0)
    {n=n/2;}

    else 
    {n=3*n+1;}

    cout << n << " ";
  }

cout << endl;
return 0;
}    
