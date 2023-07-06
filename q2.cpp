#include<iostream>
using namespace std;
int main()
{
	int s=0,r;
	for(int i=100;i<=500;i++)
	{   
	    int n=i;
		while(n!=0)
		{
			r=n%10;
			s=s+(r*r*r);
			n=n/10;
		}
		if(s==i)
		cout<<i<<endl;
		s=0;
	}
	return 0;
}
