#include<bits/stdc++.h>

using namespace std;

void countSymmetries(string b)
{
     int n = b.size()/2;
     int symmetries = 0,flag;

     while(true)
     {
          flag = 0;
          for(int i = 0;i < n;i++)
          {
              if(b[i] != b[i+n])
              {
                  flag = 1;
                  break;
              }
          }
          if(flag == 0 && n != 0)
          {
              symmetries += 1;
              n /= 2;
          }
          else
          {
              break;
          }

     }
     cout<<symmetries;
}


int main()
{
    string a;
    int n;

     cin>>n;
    cin>>a;
    countSymmetries(a);
}
