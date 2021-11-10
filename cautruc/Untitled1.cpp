#include<bits/stdc++.h>
using namespace std;
int countPerfectTeam(int a, int b, int c)
{
   if(a-c>0&&b-c>0)
   {
     int k=c;
     int ta = a-c;
     int tb = b-c;
     while(ta>0&&tb>0)
     {
        if(ta>tb)
        {
            ta=ta-2;
            tb=tb-1;
        }
        else{
            ta=ta-1;
            tb=tb-2;
        }
        k++;
     }
     return k;
   }else{
       if(a>b) return b;
       else return a;
   }

}
int main(){
cout<<countPerfectTeam(4,4,1);
}
