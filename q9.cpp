#include<iostream>
using namespace std;
int nextPrime(int x)
{   x++;int i;
	while(x!=0)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			 break;
		}
		if(i==x)
		 return i;
		x++;
	}
}
bool isPrime(int p)
{
	for(int i=2;i<p;i++)
	{
		if(p%i==0)
		 return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=(n-i);i=nextPrime(i))
	{ 
	    
		if(isPrime(n-i))
		 cout<<n<<"="<<i<<"+"<<n-i<<endl;
	}
	return 0;
}
