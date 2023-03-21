/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}



int main()
{
    string s1,s2;
    cin>>s1>>s2;
    double result;

    double sums1=0,sums2=0,notfound=0;

    for(int i=0;i<s1.length();i++){
        if(s1[i]=='+') sums1++;

        if(s2[i]=='+') sums2++;

        else if(s2[i]=='?') notfound++;
    }

    if(notfound<abs(sums1-sums2)) result=0.000000000;
    else if(notfound==0  ) result=1.000000000;
    else{
      //  cout<<notfound<<" "<<sums1<<" "<<sums2<<endl;
        result=nCr(notfound,sums1-sums2)/pow(2,notfound);




}
cout << fixed << setprecision(9) << result << endl;

    }



