#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"number of elements in array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int num,count;
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
    for(int i=0;i<n;i++)
    {
    	if (a[i] == num)
    	{
    		cout<<a[i]<<"is found at"<<i<<endl;
		}
	}
	
	if (count !=1)
	{
		cout<<"number is not found"<<endl;
	}
    

    }
   

