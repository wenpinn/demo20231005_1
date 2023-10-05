#include <iostream>
using namespace std;
int Fib(int n)
{
    if(1==n || 2==n)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
int main()
{
   cout<<Fib(5)<<endl;
   return 1;
}
