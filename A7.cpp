#include <iostream>
using namespace std;
int check[100];
void print(string s)
{
    for (int i = 0; i < s.length(); i++) cout << s[i];
    cout << endl;
}

void permulation (int i, string s, string p, int n)
{
    for (int j = 0; j < n; j++)
        if (!check[j])
        {
            p[i] = s[j];
            check[j] = 1;
            if (i == n-1) print(p);
            else permulation(i+1,s,p,n);
            check[j] = 0;
        }
}

int main()
{
    string s,p;
    cin >> s;
    p = s;
    int n = s.length();
    permulation(0,s,p,n);
    return 0;
}
