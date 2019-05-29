#include<bits/stdc++.h>

using namespace std;



int main()
{
   int n,r,x,y,i;
   int p,q;

   cin>>n>>r>>x>>y;

   vector<bool> a;
   vector<bool> b;

   for(i = 0;i < n;i++)
   {
      cin>>p;
      a.push_back(p);
   }
   for(i = 0;i < n;i++)
   {
      cin>>p;
      b.push_back(p);
   }
   q = r;
   for(i = 0;i < n;i++)
   {
       if(a[i] && b[i])
         q += x;
       else if(a[i] && !b[i])
         q -= y;
   }

   if(q > r)
    cout<<"promoted";
   else if(q < r)
    cout<<"demoted";
   else
    cout<<"no change";
}
