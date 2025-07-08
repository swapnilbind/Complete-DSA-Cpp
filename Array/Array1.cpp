#include <iostream>
using namespace std;
int main(){
    int n;            //if an array is passed to any funtion only the address of that arr is passed ,
                      // no copy of that arr is passed to funtion as in variables , arr stores the address
int arr[n] ;
cout << "Entre number of elements in arr\n" ;
cin >> n ; 
cout << "Entre values of arr\n";
 for ( int i =0 ; i<n ; i++){
    cin >> arr[i];
 }
  int sum=0;
  for(int i = 0 ; i < n; i++ ){
    sum = sum + arr[i];
  }
  cout << sum << endl ;
} 