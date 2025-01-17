#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if (num == 0 ){
        cout<<"is not a power of 2 ";
    }
    else{
    if (!( num & num - 1 )){
        cout<<"is a power of 2 ";
    }
    else{
        cout<<"is not a power of 2 ";
    }
    }
}