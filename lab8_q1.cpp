// loading the library
#include<iostream>   
//using namespace
using namespace std;   

	int sum(int arr[20],int n)
		{
		int s=0;
		for(int i=0;i<n;i++)
		{
		//asking for input
		cout<<"Enter number to be added: "<<endl;
		cin>>arr[i];
		//continue adding values to variable s
		s=s+arr[i];                      
		}

	return s;
}

	int main()
		{
		//declaring variable
		int n,arr[20];   
		//asking for input
		cout<<"Enter array size: "<<endl;
		cin>>n;
		cout<<"Sum: "<<sum(arr,n);        
		//terminating the program
	return 0;
}
