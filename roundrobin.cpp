#include<iostream>
using namespace std;
int main()
{
	int p;
	cout<<" Enter no of processes:";
	cin>>p;
	
	int BT[p],RBT[p],WT[p],TAT[p],q,t,done;
	float avgWT,avgTAT;
	for(int i=0; i<p; i++)
	{
		cout<<"Enter burst time of process P"<<i+1<<"=";
		cin>>BT[i];
		RBT[i]=BT[i];
	}
    cout<<"Enter the quantum:";
    cin>>q;
    while(true)
    {
    	done=0;
		for(int i=0;i<p;i++)
    	{
    		if(RBT[i]>0)
    		{
    			done=1;
			if(RBT[i]>q)
			{
			t=t+q;
			RBT[i]=RBT[i]-q;
		    }
		    else
		    {
		    	t=t+RBT[i];
		    	RBT[i]=0;
		    	WT[i]=t-BT[i];
		    	TAT[i]=t;
			}
		    }
	    }
	    if(done==0)
	    break;
	}
	cout<<"Process\t Waiting Time\t Turn Around Time"<<endl;
	for(int i=0;i<p;i++)
	{
	cout<<"P"<<i+1<<"\t\t";
	cout<<WT[i]<<"\t\t";
	cout<<TAT[i]<<""<<endl;
    }
    for(int i=0;i<p;i++)
    {
    	avgWT=avgWT + WT[i];
        avgTAT=avgTAT + TAT[i];
    }
    avgWT=avgWT/p;
    avgTAT=avgTAT/p;
    cout<<"Avg Waiting Time ="<<avgWT<<endl;
    cout<<"Avg Turn Around Time ="<<avgTAT<<endl;
	}

