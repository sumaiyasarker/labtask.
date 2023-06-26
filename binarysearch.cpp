
#include<iostream>
using namespace std;




int BinarySearch(int A[], int low, int high, int x){

    if(low>high){
        return -1;
    }

    int mid = (low + high)/2;

    if(x == A[mid]){
        return mid;
    }
    else if(x < A[mid]){
        return BinarySearch(A, low, mid-1, x);
    }
    else
        return BinarySearch(A, mid+1, high, x);
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x;
    cout<<"Enter the number you want to search : ";
    cin>>x;

    int result = BinarySearch(arr, 0, size - 1, x);

    if(result == -1){
        cout<<"The number you are searching for is not found.";
    }
    else
        cout<<"The number found at index "<<result<<".";

    return 0;
}
