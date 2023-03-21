#include<bits/stdc++.h>
#include <vector>
#define N 1000000001

using namespace std;
typedef unsigned long int ul;
typedef long long ll;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void solve(){
int n,m;
   cin>>n>>m;
   char s[n];

   char ab[2];

   if(m==2){
        cin>>s[0];
   ab[0]=s[0];
   for(int i=1;i<n;i++){
    cin>>s[i];
    if(s[i]!=ab[0]) ab[1]=s[i];
   }
   }


   int i=0;
   int count=0;



   if(m==2){
        int mini=2000;
   int check=1;
   int check2=1;
   while(i<n-1){

    if(s[i]==s[i+1]){
            int x=i;


        if(i+2<n && s[i+2]!=s[i+1]){

            check++;
            i++;
        while(s[i]!=s[i+1]){
            check++;
            i++;
        }

        int temp=x;



        if(x-1>=0 && s[x-1]!=s[x]){

            check2++;
            x--;
        while(s[x-1]!=s[x] || x>=0){
            check2++;
            x--;
        }

        }

        if(check>check2){
            i=temp;

             if(i-1>=0 && s[i-1]!=s[i]){
            s[i]=s[i-1];

            i--;
        while(s[i-1]==s[i]){
            if(i-1>=0) s[i]=s[i-1];
            else s[i+1]=s[i-1];

            i--;
        }
        i=temp;

        }
        }
        else{
                i=temp;
             if(i+2<n && s[i+2]!=s[i+1]){
            s[i+1]=s[i+2];

            i++;
        while(s[i]!=s[i+1]){
            if(i+2<n) s[i+1]=s[i+2];
            else s[i+1]=s[i-1];

            i++;
        }
        }


        }

        count+=min(check,check2);

        }
        }


        else{
            char c=s[i+1];
           s[i+1]='1';
           count++;
           i++;
        }
    }
   }


   else{

   while(i<n-1)
   {

       if(s[i]==s[i+1])
       {
           char c=s[i+1];
           s[i+1]='1';
           count++;
           i++;
       }
       else
       {
           i++;
       }
   }}

   cout<<count<<endl;




}

int main(){
	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
