/***    
 *   hw 20231005
 *   @author: 1101658
 *   @name: 楊嘉冠
***/
#include <iostream>
using namespace std;

int fib(int n) {
    if(n <= 1) 
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}
