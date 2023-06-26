#include <iostream>
using namespace std;



void merge(int A[], int B[], int C[], int n, int m){
    int i = 0, j = 0, k = 0;

    while(i <= n - 1 && j <= m - 1){
        if(A[i] > B[j]){
            C[k++] = B[j++];
        }
        else{
            C[k++] = A[i++];
        }
    }

    while(i <= n - 1) {
        C[k++] = A[i++];
    }

    while(j <= m - 1) {
        C[k++] = B[j++];
    }
}

int main(){
    int A[] = {1, 3, 5, 8};
    int B[] = {2, 4, 7};
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    int C[n + m];

    merge(A, B, C, n, m);

    cout << "Merged Array: ";
    for(int i = 0; i < n + m; i++) {
        cout << C[i] << " ";
    }

    return 0;
}

