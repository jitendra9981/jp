#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[7];
    int n;

    cout<<"enter  n ";
    cin>>n;

for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"selection shorting"<<endl;
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp = a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
   }
   for(i=0;i<n;i++){
    cout<<a[i];
   }
   return 0;
}

  