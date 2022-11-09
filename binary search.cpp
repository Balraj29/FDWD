#include<iostream>
using namespace std;
int binary(int arr[],int x,int low,int high)
{
	int mid;
	while(low!=high)
	{
		mid=(low+high)/2;
		if(x==arr[mid])
			return mid;
		else if(x>arr[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return 0;
}
int main()
{
	int n,ans;
    cout<<"number of elements in array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int num,count;
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
    ans=binary(a,num,0,n);
    if(ans==0)
		cout<<"Element not found";
	else
		cout<<"Element found at index:"<<ans;
}
