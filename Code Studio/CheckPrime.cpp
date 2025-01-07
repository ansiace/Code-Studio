#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if ( n < 2 ){
        cout<<"not a prime number";
    }
    else {
    bool prime = 1 ;
    for (int i = 2 ; i < n ; i++){
       if (n % i == 0 ){
            prime = 0 ;
            break;   
       }
    }
    if ( prime == 0 ){
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
    }
}