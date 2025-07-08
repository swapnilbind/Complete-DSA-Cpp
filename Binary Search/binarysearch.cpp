#include <iostream>
using namespace std ;

int binarysearch(int arr[] ,int size , int key ){
    int start =0  ;
    int end= size-1;
    int mid = (start + end)/2;
    while ( start <= end){
        if(arr[mid]==key){
       return mid;
        }
        if(arr[mid]> key){
            end= mid-1;
        }
        else {
            start = mid +1;
        }
        mid = (start+ end)/2; 
    }
    return -1;
}
 
int main (){
    int arr[]= {1 , 4, 5 ,7 , 9};
    int index= binarysearch(arr, 5 , 7);
    cout << "given index is :"<< index << endl ;
}
