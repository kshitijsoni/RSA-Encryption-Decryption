#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
int s,n,k,i,j,r,c,y[100000],d[100000],z;  
cout<<"enter secret: ";  
cin>>s;  
cout<<"enter n:";  
cin>>n;  
cout<<"enter k:";  
cin>>k;  
d[0]=s;  
c=1; i=1;  
while(c<k)  
{  
 r=rand()%100;  
 d[i]=r;  
 i++; c++;  
}  
cout<<" cofficients of polynomial: ";  
for(i=0;i<k;i++)  
cout<<d[i]<<" ";  
cout<<endl;  
for(i=1;i<=n;i++)  
{  
y[i]=s;  
 for(j=1;j<k;j++)  
{  
// cout<<d[j]<<"...." ;cout<<pow(i,j)<<"......." ;  
 z= d[j]*pow(i,j); // cout<<z<<" ";  
 y[i]=y[i]+z ; } //cout<<y[i]<<" ";  
}  
cout<<"secret shares"<<endl;  
for(i=1;i<=n;i++)  
cout<<"("<<i<<","<<y[i]<<")" <<endl;  
return 0;  
} 
