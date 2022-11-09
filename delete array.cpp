//deleting an element from array
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"enter the element to be deleted"<<endl;
    int num,t;
    cin>>num;
    for(int i=0;i<n;i++)
    {
    	if (a[i]==num)
    	{
    		t=i;
		}
	}
    
    for(int i=t;i<n;i++)
    {
    	a[i] = a[i+1];
    	n=n-1;
	}
   for(int i=0;i<n;i++)
   {
   	cout<<a[i]<<" ";
   }
}
