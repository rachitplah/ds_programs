#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s;
	cout<<"Enter number to search:";
	cin>>s;
	int f=1;
	for(int i=0;i<n;i++)
	{
		if(s==arr[i])
		{
			cout<<s<<" is at "<<(i+1)<<"th position"<<endl;
			f=0;
			break;
		}
	}
	if(f)
	{
		cout<<s<<" was not found"<<endl;
	}
	return 0;
}
