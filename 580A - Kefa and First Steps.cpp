

#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[n],s[n];

    cin>>a[0];
    s[0]=1;

    for(int i=1;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>=a[i-1]) s[count]++;
        else {
            s[++count]=1;
        }

    }
    int max=s[0];
    for(int i=1;i<=count;i++)
    {
        if(max<s[i]) max=s[i];
    }

    cout<<max;

}
