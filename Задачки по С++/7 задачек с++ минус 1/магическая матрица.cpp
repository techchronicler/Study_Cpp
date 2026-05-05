#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
	bool flag;
int n, a[1000][1000],sum=0,s=0;
flag=true;

 //ввод массива
	for(int i=0; i<n; i++){ //строки	
		for(int j=0; j<n; j++){//столбцы
			a[i][j]=-6+rand()%6;	}}	
 
    //вывод массива
	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	cout<<a[i][j]<<" ";}
	cout<<endl;}	
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
 
//
for(int i=0;i<n;i++)
sum+=a[0][i];
 
for(int i=0;i<n;i++)
{s=0;
for(int j=0;j<n;j++)
s+=a[i][j];
if(s!=sum) 
}
 

for(int i=0;i<n;i++)
    s=0;
for(int j=0;j<n;j++)
s+=a[j][i];


 

s=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
if(i==j) s+=a[i][j];
if(s!=sum) 

 

s=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
if(i+j==n-1) s+=a[i][j];
if(s!=sum)

 

cout<<"Матрица магическое";
else
cout<<"Матрица не магическое";
 
 
return 0;
}
