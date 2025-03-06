#include <iostream>
using namespace std;
int main()
{
    short steps,currentalt;
    cout<<"How many steps do you want the piramid to have? ";
    cin>>steps;
    steps*=2;
    for(short current=steps;current>0;current-=2)
    {
        currentalt=steps-current;
        for(short blank=0;blank<current/2;blank++)
            cout<<' ';
        for(short block=0;block<=currentalt;block++)
            cout<<'#';
        cout<<endl;
    }
    return 0;
}
