#include <iostream>
using namespace std;
int check[100];
void print(string p)
{
    for (int i = 0; i < p.length(); i++) cout << p[i];
    cout << endl;
}

void permulation (string s, string p, int i)
{
    int n = s.length();
    for (int j = 0; j < n; j++)
        if (!check[j])
        {
            p[i] = s[j];
            check[j] = 1;
            if (i == n-1) print(p);
            else permulation(s,p,i+1);
            check[j] = 0;
        }
}

int main()
{
    string s,p;
    cin >> s;
    p = s;
    permulation(s,p,0);
    return 0;
}

