#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a[10],n;
     cout<<"the number of values are"<<endl;
     cin>>n;
    for(int i=0;i<n;i++)
        {
             cin>>a[i]>>endl;
            i++;
        }
    for(int i=0;i<n;i++)
        {
             cout<<a[i]<<endl;
            i++;
        }
    return 0;
}