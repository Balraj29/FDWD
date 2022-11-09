#include<iostream>
using namespace std;
int main()
{

 int n,num,i;
 cout<<"number of elements in array\n";
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
 	cin>>a[i];
 	
 }
 cout<<"enter index at which number shouldbe inserted"<<endl;
 cin>>num;
 n=n+1;
 for(i=n-2;i>=num;i--){
 	a[i+1]=a[i];}
 	cout<<"enter number which should be inserted\n";
 	cin>>a[num];
 	for(i=0;i<n;i++)
 	{
 		cout<<a[i]<<" ";
 		
	 }
}
