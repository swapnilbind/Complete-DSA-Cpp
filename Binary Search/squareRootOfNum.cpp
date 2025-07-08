#include <iostream>
using namespace std ; 

long long int BinarySearch(int n){
    int s = 0;
    int e= n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while( s <= e){
      long long  int square = mid * mid ;
      if (square == n){
        return mid ;
      }
      if(square < n){
        s = mid +1;
        ans = mid;
      }
      else{
        e= mid -1;
      }
      mid = s + (e-s)/2;
    }
    return ans;
}

    double moreprecision(int n , int precision , int tempSol){
       double factor = 1 ;
       double ans = tempSol;

       for (int i = 0; i < precision; i++)
       {
        factor = factor / 10 ;
        for(double j=ans ; j*j < n ; j=j+factor ){
            ans = j ;
        }
       }
       return ans ;
    }

    int main(){
        int n ; 
        cout << "Entre the number : " << endl ;
        cin >> n ;

       int tempSol = BinarySearch(n);
       cout << "Answer is :"<< moreprecision(n , 3 , tempSol) << endl ;
       return 0 ;
    }