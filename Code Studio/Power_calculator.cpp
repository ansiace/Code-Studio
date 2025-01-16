#include<iostream>
using namespace std;
int main(){
    int n , p ;
    int ans = 1 ;
    cin >> n >> p ;
    for ( int i = 1 ; i <= p ; i++ ){
        ans = ans * n  ;
    }
    cout<<ans;
}