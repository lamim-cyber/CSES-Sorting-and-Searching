#include <bits/stdio.h>
using namespace std;
int main()
{
    int n, m, k;
    cin>> n>>m >> k;
    vector< int > a(n);
    vector< int > b(m);
    for(int i=0; i<n; i++) cin>> a[i];
    for(int i=0; i<m; i++) cin>> b[i];
    srt(a) srt(b)
    int l=0, r=0;
    int ans=0;
    while(l<n && r<m)
    {
      if(b[r] >= a[l]-k && b[r] <= a[l]+k)
      {
          l++;
          r++;
          ans++;
      }
      else if(b[r] < a[l]-k )
      {
          r++;
      }else
      l++;
    }
    cout<< ans<< nl; 
}
