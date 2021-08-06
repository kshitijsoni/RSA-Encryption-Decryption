#include <iostream>  
#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
float n,t=0,y[100000],l;  
int de,n1,d1,k;  
int m,i,p;  
float x[100000],h;  
cout<<"enter n1=p*q:"<<endl;  
cin>>n1;  
p=n1;  
cout<<"enter n and k"<<endl;  
cin>>n>>k;  
cout<<"enter number of persons sharing the key"<<endl;   cin>>l;  
 if(l<k)  
cout<<"cannot reconstruct";  
else  
{  
cout<<"share your information"<<endl;  
for(i=0;i<k;i++)  
 cin>>x[i]>>y[i+1];  
 int d1;  
for(i=1;i<=k;i++)  
 { h=1;  
 for(m=0;m<k;m++)  
 {  
 if(m!=i-1)  
 h=h*( x[m] / (x[m] - x[i-1]) ) ;  
 }  
 h=h*y[i];  
 t=t+h;  
 }  
 k=int(t)%n1;  
if(k<0)  
 k=k+n1;  
// cout<<"secret key"<<k<<endl;  
  
int k1=1;  
int c;  
cout<<"enter cipher text:"<<endl;  
cin>>c;  
for(int i=0;i<k;i++) 
 {  
 k1=k1*c;  
 k1=k1%n1;  
 }  
 de=k1%n1;  
 if(de<0)  
 de=de+n1;  
 cout<<"decrypted message:"<<de<<endl; 
cout<<"decrypted message:"<<de<<endl;
}  
 return 0;  
}  
