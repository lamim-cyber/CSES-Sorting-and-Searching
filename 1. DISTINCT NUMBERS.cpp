#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    map< long long , int > m;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        m[x]++;
    }

    cout<< m.size()<< endl;
}
