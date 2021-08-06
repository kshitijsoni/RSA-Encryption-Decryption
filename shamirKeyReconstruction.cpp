#include <iostream>  
#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
float n,k,t=0,y[100000],l;  
int m,i;  
float x[100000],h;  
cout<<"enter n:"<<endl;  
cin>>n;  
cout<<"enter k:"<<endl;  
cin>>k;  
cout<<"enter no.of shares available:"<<endl; 
cout<<"enter no.of shares available:"<<endl; 
cin>>l;  
if(l<k)  
cout<<"cannot reconstruct";  
else  
{  
 cout<<"enter secret shares available:"<<endl; 
cout<<"enter secret shares available:"<<endl;
for(i=0;i<k;i++)  
 cin>>x[i]>>y[i+1];  
 for(i=1;i<=k;i++)  
 {  
 h=1;  
 for(m=0;m<k;m++)  
 {  
 if(m!=i-1)  
 h=h*( x[m] / (x[m] - x[i-1]) ) ;  
 }  
//cout<<y[i]<<" ............"; cout<<h<<"........."; 
//cout<<y[i]<<" ............"; cout<<h<<"........."; 
 h=h*y[i]; // cout<<h<<" ..............."; 
h=h*y[i]; // cout<<h<<" ..............."; 
 t=t+h;  
 }  
 cout<<endl;  
cout<<"reconstructed key"<<"->"<<t; 
>"<<t; 
 }  
 return 0;  
}  
