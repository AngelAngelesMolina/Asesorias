#include <iostream>
using namespace std;
void isFive(int n){
    if(n == 5){
        cout<<"Es cinco el numero ingresado"<<endl; 
    }else{
        cout<<"No es cinco el numero que ingresaste"<<endl; 
    }
}
void isFiveRef(int &n){
    if(n == 5){
        cout<<"Es cinco el numero ingresado"<<endl; 
    }else{
        cout<<"No es cinco el numero que ingresaste"<<endl; 
    }
}
int main()
{
int num = 0; 
cout<<"Digite un numero: "<<endl;cin>>num; 
isFive(num); 
isFiveRef(num); 

return 0;
}