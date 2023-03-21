

#include <iostream>

using namespace std;

int main()
{
    long long m,n;
    cin>>n>>m;


    long long mini,maxi;
    long long x=n-(m-1);
    maxi=x*(x-1)/2;

    //5 3
    //xx xx x->

    mini=((n/m)*((n/m)-1)/2)*m+(n%m)*(n/m);

    cout<<mini<<" "<<maxi;

}
