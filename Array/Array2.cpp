#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[n] ;
cout << "Entre number of elements in arr\n" ;
cin >> n ; 
cout << "Entre values of arr\n";
 for ( int i =0 ; i<n ; i++){
    cin >> arr[i];
 }
 for ( int i = 0 ; i< n/2 ; i++){
   int j = 0 ;
    arr[j] = arr[n-1];
    arr[n-1]=arr[j];
    j++;
    n--;
 }
 while(int k=0 < n){
    cout << arr[k];
    k++;

 }

 return 0;
}