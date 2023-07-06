#include<iostream>
using namespace std;
int nextPrime(int x)
{
	x++;int i;
	while(x!=0){
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		 break;
	}
	if(i==x) return x;
	x++;
}
}
int main(){
   int n;
   cin>>n;
   int k=2;
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=n-i;j++)
   	 cout<<" ";
   	for(int j=1;j<=i;j++)
   	 {
		cout<<k<<" ";
		k=nextPrime(k);
	}
   	cout<<endl;
   }
return 0;
}
