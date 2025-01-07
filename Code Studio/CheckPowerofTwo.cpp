#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if ( n && !(n & n-1)){
        cout<<n<<" is a power of 2";
    }
    else{
        cout<<n<<" is NOT a power of 2";
    }
    

}