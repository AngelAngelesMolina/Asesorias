#include <iostream>
using namespace std;
int fibonacci (int x){
if(x == 1 || x ==2) {
    return 1; 
}
return fibonacci(x-1) + fibonacci(x - 2); 
}
int main()
{
    // Cada numero es la suma de los dos anteriores
int n; 
cout<<"Digite el número de elementos: "<<endl; cin>>n; 

for (int i = 1; i <= n; i++)
{
cout<<fibonacci(i)<<" "; 
}


return 0;
}