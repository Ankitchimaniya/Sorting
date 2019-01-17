#include<iostream>
using namespace std;
#define Max 10
class Array
{
	int n;
	int a[Max];
	public:	
		void getdata();
		void traverse();
		void shellsort();
};
void Array::getdata()
{
	cout<<"Enter the number of elements to be insterted:";
	cin>>n;
	cout<<"Enter elements in array:\n";
	if(n<Max)
	{	
	for(int i=0;i<n;i++)
	   cin>>a[i];
    }
    else 
    {
	  cout<<"Array size is only "<<Max;
	}
}
void Array::traverse()
{
	cout<<"\nThe Array elements are:\n";
	for(int j=0;j<n;j++)
	   cout<<a[j]<<"\t";
	cout<<endl;   
}
void Array::shellsort()
{
	int gap,i,j,temp;
	gap=n/2;
	while(gap>0)
	{
		for(i=gap;i<n;i++)
		{
			j=i;
			temp=a[i];
			while((a[j-gap]>temp)&&(j>=gap))
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
}
int main()
{
	Array A;
	A.getdata();
    A.traverse();
    A.shellsort();
    A.traverse();
    return 0;
}
