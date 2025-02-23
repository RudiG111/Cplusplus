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
    for(int i=0;i<n;i++)
    arr.push_back(i);
    bool sorted=false;
    random_shuffle(arr.begin(),arr.end());
    while(!sorted)
    {
      random_shuffle(arr.begin(),arr.end());
      nr++;
      for(int i=0;i<n-1;i++)
      {if(arr[i]>arr[i+1]){ sorted=false;
      break;}
      else sorted=true;}
      for(int i: arr)
      cout<<i<<" ";
      cout<<"Shuffle count:"<<nr<<endl;
    }
    return 0;
}
