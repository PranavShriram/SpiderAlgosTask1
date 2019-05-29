#include<bits/stdc++.h>

using namespace std;

string addOne(string a)
{
   string temp = a;
   int i = 0,carry = 1;

   reverse(temp.begin(),temp.end());


   for(i = 0;i < temp.size();i++)
   {
          if(i == temp.size()-1)
          {
            if(carry == 1)
              return "impossible";
          }
         temp[i] = temp[i] + carry;
         if(temp[i] == 50)
          {
            temp[i] -= 2;
            carry = 1;
          }
          else if(temp[i] == 49)
          {
            break;
          }

   }
   reverse(temp.begin(),temp.end());
   return temp;
}

string subOne(string a)
{
   string temp = a;
   int i = 0,borrow = 1;

   reverse(temp.begin(),temp.end());


   for(i = 0;i < temp.size();i++)
   {
         if(i == temp.size()-1)
           return "impossible";
         temp[i] = temp[i] - borrow;
         if(temp[i] == 47)
          {
            temp[i] += 2;
            borrow = 1;
          }
          else if(temp[i] == 48)
          {
            break;
          }

   }
   reverse(temp.begin(),temp.end());
   return temp;
}


void checkAverageString(string a,int n)
{
    string b,c;
    if(addOne(a) == "impossible" || subOne(a) == "impossible")
     cout<<-1;
    else
    cout<<addOne(a)<<" "<<subOne(a);
}


int main()
{
  int l;

  string a;

  cin>>l;
  cin>>a;
  checkAverageString(a,l);
}
