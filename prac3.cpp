#include<iostream>
using namespace std;
int binary_search(int a[], int l, int r, int x)
{
    int m=0;
     if (r >= l)
   {
        int mid = l + (r - l)/2;


        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binary_search(a, l, mid-1, x);
        return binary_search(a, mid+1, r, x);
   }
 return -1;
}
int main()
{
	int n,i,j;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int num;
	cout<<"Enter number to search:";
	cin>>num;
	int ret=binary_search(a,0,n-1,num);
    if(ret==-1)
      cout<<"Number not found";
    else
    cout<<num<<" is at "<<ret<<" position";
	return 0;
}
