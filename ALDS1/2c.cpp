#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

void bubble_sort(vector<string> C, int n) {
    int cnt = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; --j) {
            if (C.at(j) < C.at(j - 1)) {
                swap(C.at(j), C.at(j));
                ++cnt;
                flag = true;
            }
        }
    }
}

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
    int A[100], B[100], n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        B[i] = A[i];
    }
    bubble_sort(a, n);
    for (int i = 0;i < n; ++i)    cout << (i > 0 ? " " : "") << A[i];
    int sw = selection_sort(A, n);
}