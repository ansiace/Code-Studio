#include<iostream>
using namespace std;
int main() {
    int x , y , r = 0 ;
    cin>>x;
    cin>>y;
    for ( int i = 1 ; i <= y ; i++ ){
        r = r + x ;
    }
    cout<<r;
}