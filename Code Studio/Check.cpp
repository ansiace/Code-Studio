#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n == 0 ){
        cout<<"false";
    }
    else{
    if (!( n & n - 1 )){
        cout<<"correct";
    }
    else{
        cout<<"false";
    }
    }
}