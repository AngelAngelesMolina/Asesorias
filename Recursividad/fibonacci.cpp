#include <iostream>
using namespace std;

int fibonacci (int x){
if(x == 1 || x ==2) {
    return 1; 
}
//x >= 3 
return fibonacci(x-1) + fibonacci(x - 2); 
}
int main()
{
    // Cada numero es la suma de los dos anteriores
int n=0; 
cout<<"Digite el número de elementos: "<<endl; cin>>n; 

for (int i = 1; i <= n; i++)
{
cout<<fibonacci(i)<<" "; 
/*
4 -> 1 1 2 3 (fib(3)+fib(2) -> 2 + 1 = 3)
3 -> 1 1 2 (fib(2)+fib(1) -> 1 + 1 = 2)
3 -> 0 1 1 2 (fib(2)+fib(1) -> 1 + 1 = 2)

*/
}


return 0;
}