#include<iostream>  
#include<bits/stdc++.h>  
using namespace std;  
int gcd(int a, int h)  
{  
 int temp;  
 while (1)  
 {  
 temp = a%h;  
 if (temp == 0)  
 return h;  
 a = h;  
 h = temp;  
 }  
}  
int prime(long int pr)  
{  
int i,j;  
j = sqrt(pr);  
for (i = 2; i <= j; i++)  
{  
if (pr % i == 0)  
return 0;  
}  
return 1;  
}  
int main()  
{  
int p,q,n,phi,e,d,m,c,de,h,key,flag;  
long long int s,n1,k1,i,j,r,l,o[1000],a,c1,y[100000],d1[100000],x[1000],z;  int visited[20];  
visited[0]=1;  
for(int v=1;v<20;v++)  
{  
 visited[v]=0;  
}  
cout<<"enter message:";  
cin>>m;  
  
cout << "enter a prime number p: ";  
cin >> p;  
flag = prime(p);  
if (flag == 0)  
{  
cout << "WRONG INPUT\n";  
exit(1);  
}  
cout << "enter another prime number q:";  
cin >> q;  
flag = prime(q);  
if (flag == 0 || p == q)  
{  
cout << "\nWRONG INPUT\n";  
exit(1);  
}  
n=p*q;  
cout<<"n="<<n<<endl;  
phi=(p-1)*(q-1);  
e=2;  
while (e < phi)  
{  
 if (gcd(e, phi)==1) 
 break;  
 else  
 e++;  
}  
cout<<"e="<<e<<endl;  
while(1)  
{  
d=rand()%n;  
h=e*d;  
if(h%phi==1)  
{  
 key=d;  
 break;  
}  
}  
cout<<"secret key is:"<<key<<endl;  
c=1;  
for(int i=0;i<e;i++)  
{  
c=c*m;  
c=c%n;  
}  
c=c%n;  
if(c<0)  
c=c+n;  
cout<<"encrypted message:"<<c<<endl;  
cout<<"enter number of persons to share the secret key:";  cin>>n1;  
cout<<"enter threshold limit:";  
cin>>k1;  
d1[0]=d;  
c1=1; i=1;  
cout<<"polynomial coefficients:";  
while(c1<k1)  
{  
r=rand()%100;  
d1[i]=r;  
cout<<d1[i]<<" ";  
i++; c1++;  
}  
for(i=1;i<=n1;i++)  
{  
 y[i]=d;  
 l=rand()%20;  
 if(visited[l]==0)  
 {  
 visited[l]=1;  
 } 
 else  
 {i=i-1;  
 continue;  
 }  
 o[i]=l;  
 for(a=1;a<k1;a++)  
 x[a]=pow(l,a);  
 for(j=1;j<k1;j++)  
 {  
 z= d1[j]*x[j];  
  
 y[i]=(y[i]+z);  
 }  
}  
cout<<endl<<"secret shares :"<<endl;  
cout<<endl<<"secret shares :"<<endl;  
j=1;  
for(i=1;i<=n1;i++)  
cout<<endl<<"("<<o[i]<<","<<y[i]<<")" <<endl; 
cout<<endl<<"("<<o[i]<<","<<y[i]<<")" <<endl;
return 0;  
}  
