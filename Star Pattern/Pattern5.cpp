#include<iostream>
using namespace std;
int main() {

    int i , j , n , o ;
    cin>>n;
    cin>>o;

    for ( int i = 1 ; i <= n ; i++ ){
        
        for ( int j = 1 ; j <= o ; j++ ){
            
            if( j >= 6-i && j <= 4+i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
       
        cout<<endl;
    }

}