
#include<iostream>
using namespace std;
int main()
{
    int a, b, i=0;
    cin >> a >> b;

    if(a > b)
    cout<< i;

    else
    while (a<=b)
    {
      a =a*3;
      b =b*2;
      i++;
    }


    cout << i;
}

