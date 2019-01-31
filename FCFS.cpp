#include<iostream>
#define max 100
using namespace std;
int main()
{
	int p;
	cout<<"Enter number of process\n";
	cin>>p;
	int AT[max],ET[max],CT[max],TAT[max],WT[max];
	for(int i=0;i<=p-1;i++)
	{
		cout<<"Enter arrival time for process - P"<<(i+1)<<endl;
		cin>>AT[i];
		cout<<"Enter execution time for process - P"<<(i+1)<<endl;
		cin>>ET[i];
    } 
    
   	CT[0]=ET[0];
	   for(int i=1;i<=p-1;i++)
	   {			
			if(CT[i-1]<AT[i])
			{
				CT[i]=AT[i]+ET[i];
			}
			if(CT[i-1]>AT[i])
			{
				CT[i]=CT[i-1]+ET[i];
			}
		}
		for(int i=0;i<=p-1;i++)
		{
			TAT[i]=CT[i]-AT[i];
		}
		for(int i=0;i<=p-1;i++)
		{
			WT[i]=TAT[i]-ET[i];
		}
		
		for(int i=0;i<p;i++)
		{
			cout<<"Arrival time for P"<<i+1<<"="<<AT[i]<<endl;
		}
		for(int i=0;i<p;i++)
		{
			cout<<"Execution time for P"<<i+1<<"="<<ET[i]<<endl;
		}
		for(int i=0;i<p;i++)
		{
			cout<<"completion time of process P"<<i<<"="<<CT[i]<<endl;
		}
		for(int i=0;i<p;i++)
		{
			cout<<"Turn around time for P"<<i+1<<"="<<TAT[i]<<endl;
		}
		for(int i=0;i<p;i++)
		{
			cout<<"Waiting time for P"<<i+1<<"="<<WT[i]<<endl;
		}
	return 0;
}
