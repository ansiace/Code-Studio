#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r , sum = 0 , prod = 1 , ans ;
    while( n != 0 ){
        r = n % 10 ;
        prod = prod * r ;
        sum = sum + r ;
        n = n / 10 ;
    }
    ans = prod - sum ;
    cout<<"Answer is "<<ans;
}