#include<iostream>
#include<algorithm>
using namespace std;

void bubble_sort(int A[], int n) {
    int cnt = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; --j) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
                ++cnt;
                flag = true;
            }
        }
    }
    for (int i = 0;i < n; ++i)    cout << (i > 0 ? " " : "") << A[i];
    cout << endl << cnt << endl;

}

int main () {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n;++i) {
        cin >> a[i];
    }
    bubble_sort(a, n);
}