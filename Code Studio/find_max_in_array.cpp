#include<iostream>
using namespace std;
int main(){
    int array[] = { 0, 4, 5, 3, 8, 6, 1, 2 };
    int n = sizeof (array) / sizeof (int);
    int max = array[0]; //taking one element from the given array to compare.
    for (int i = 0 ; i < n ; i++){
        if ( array[i] > max ){
            max = array[i];
        }
    }
    cout<<max;
    
}
