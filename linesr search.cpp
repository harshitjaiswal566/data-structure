#include<iostream>
using namespace std;
 class lsearch
{int *arr;
public:
void linsearch(int N,int X)
{ int c=0;
for (int i=0;i<N;i++)
  {  if(arr[i]==X)
    { cout<<"the no. is found at index"<<i+1 ;
		c++;}
}
if(c==0)
cout<<"element not found ";
}
};
int main()
{int n,x;
	lsearch obj; 
	int *arr=new int[20];
	cout<<"enter no. of element";
	cin>>n;
	cout<<"enter an array";
	for (int i=0;i<n;i++)
	{ cin>>arr[i];
		}
	cout<<"enter an element you want to search for";
	cin>>x;
	obj.linsearch(n,x);
	return(0);
}
