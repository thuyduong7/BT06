#include <iostream>
using namespace std;

void f(int a[])
{
    cout << &a;
}

int main(){
    int a[5] = {1,2,3,4,5};
    cout << &a[0] << endl;
    f(a);
    return 0;
}
