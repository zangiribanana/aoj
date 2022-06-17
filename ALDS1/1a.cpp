#include<iostream>
using namespace std;

void insertion_sort(int A[], int N){ // N個の要素を含む0-based A
    for (int i = 0;i < N; ++i)    cout << (i > 0 ? " " : "") << A[i];
    cout << endl;
    for (int i =  1;i < N; ++i) {
        int v = A[i];
        int j = i - 1;    // vより1若い添え字
        // 0~jは整列済み。どこに挿入するかを決める。
        while (j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        for (int i = 0;i < N; ++i)    cout << (i > 0 ? " " : "") << A[i];
        cout << endl;
    }
}
int main () {
    int n, A[1000];
    cin >> n;
    for (int i;i < n;++i)    cin >> A[i];
    insertion_sort(A, n);
}