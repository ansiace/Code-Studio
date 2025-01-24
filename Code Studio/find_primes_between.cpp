#include<iostream>
using namespace std;
int main(){
    int num , num2 , k , count = 0;
    cin>>num>>num2; // enter two numbers between you want to print prime numbers.
    for(int i = num + 1 ; i < num2 ; i++ ){
        for ( k = 2 ; k < i ; k++ ){
            if ( i % k == 0 ){
            break;
            }
        }
        if( k == i ){
        count++;
        cout<<i<<" ";
        }
    }
    cout<<endl<<count;
}
