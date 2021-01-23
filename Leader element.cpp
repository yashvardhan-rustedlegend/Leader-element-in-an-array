#include<iostream>
using namespace std;
int main()
{
	int a[20],n;
	cout<<"enter size of the array"<<endl;
	cin>>n;
	cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int count=n-1-i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				count--;
				if(count==0)
				{
					cout<<"leader is"<<a[i]<<endl;
				}
			}
			
		}
		
	}	
}
