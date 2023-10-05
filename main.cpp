/***
 *  hw20231005
 *  @author: 1071813
 *  @name:林楷騰
***/
#include <iostream>
using namespace std;
int Fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n>=2)
    {
        return(Fib(n-1)+Fib(n-2));
    }
    return 1;
}
int main()
{
   cout<<Fib(5)<<endl;
   return 1;
}
