#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	long long nr=0;
	short n;
	cout<<"The number of the elements of the array:";
	cin>>n;
	vector <short>arr;
	for(int i=1; i<=n; i++)
		arr.push_back(i);
	bool sorted=false;
	random_shuffle(arr.begin(),arr.end());
	for(int i: arr)
		cout<<i<<" ";
	cout<<endl;
	while(!sorted)
	{	sorted=true;
		for(int i=1; i<n; i++)
		{	if(arr[i-1]>arr[i]) {
				sorted=false;
				for(int j=i; i>=0; i--)
					if(arr[i]>arr[j]) swap(arr[i],arr[j]);
				nr++;
			}
		}
	}
	for(int i: arr)
		cout<<i<<" ";
	cout<<"Number of comparisons:"<<nr<<endl;
	return 0;
}