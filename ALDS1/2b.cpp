#include<iostream>
#include<algorithm>
using namespace std;

int selection_sort(int A[], int N) {
    int swap_cnt = 0;
    int minj;
    for (int i = 0; i < N; ++i ) {
        minj = i;
        for (int j = i; j < N; ++j ) {
            if (A[minj] > A[j])    minj = j;
        }
        if (A[minj] < A[i]){
            swap(A[minj], A[i]);
            ++swap_cnt;
        }
    }
    return swap_cnt;
}

int main () {
    int A[100], n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    int sw = selection_sort(A, n);
    for (int i = 0; i < n; ++i) cout << (i>0?" ":"") << A[i];
    cout << endl << sw << endl;
}