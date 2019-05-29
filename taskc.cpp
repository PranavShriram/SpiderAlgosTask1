#include<bits/stdc++.h>

using namespace std;

void queries()
{
   int a,b,c,d,e,f,ab,bc,de,ef;

   cout<<"0 1";
   cin>>ab;


   cout<<"1 2";
   cin>>bc;

   cout<<"3 4";
   cin>>de;

   cout<<"4 5";
     cin>>ef;



   if(ab % 7 == 0 && bc % 7== 0)
     {b = 7;}
   else if(ab % 9 == 0 && bc % 9== 0)
    { b = 9;}
   else  if(ab % 43 == 0 && bc % 43== 0)
     {b = 43;}
    else  if(ab % 10 == 0 && bc % 10== 0)
     {b = 10;}
    else if(ab % 16 == 0 && bc % 16 == 0)
    {
       if((ab % 10 == 0 && ab%32 != 0) || (bc %10 == 0 && bc%32 != 0))
        {b = 8;}
       else
        {b = 16;}
    }
    else
     {b = 8;}




     a = ab/b;
     c = bc / b;


   if(de % 7 == 0 && ef % 7== 0)
     e = 7;
   else if(de % 9 == 0 && ef % 9== 0)
     e = 9;
   else  if(de % 43 == 0 && ef % 43== 0)
     e = 43;
    else  if(ef % 10 == 0 && de % 10== 0)
     e = 10;
    else if(de % 16 == 0 && ef % 16 == 0)
    {
       if((de % 10 == 0 && de%32 != 0) || (ef %10 == 0 && ef%32 != 0))
        e = 8;
       else
        e = 16;
    }
    else
     e = 8;

     d = de/e;
     f = ef / e;

   cout<<a<<"\n";

   cout<<b<<"\n";

   cout<<c<<"\n";

   cout<<d<<"\n";

   cout<<e<<"\n";

   cout<<f<<"\n";

}

int main()
{
 queries();
}
