#include <iostream>
using namespace std;

double H(int N){
    int a[10000];
   if (N == 1) return 0.0;
   return H(N-1) + 1.0/N;
}
// Ham sau 52 tang thi bi loi tran bo nho


int main(){
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}
