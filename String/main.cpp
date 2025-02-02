#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string name,name2,statement;
    cin>>name>>name2;
    bool sameinitial=false;
    if(name[0]==name2[0])
    sameinitial=true;
    statement=(name.size()==name2.size())? "The two names have the same length" : "The two names do not have the same length";
        cout<<statement;
    cout<<endl<<name[0]<<"&"<<name2[name2.size()-1];
    cout<<endl<<"Math is \"easy\"."<<endl;
    if(sameinitial)
    cout<<"The two names have the same initials"<<endl;
    string fullname;
    cout<<"Enter your full name:";
    cin.ignore();
    getline (cin, fullname);
    cout<<fullname;
    unsigned int age;
    cout<<endl<<"Enter your age:";
    cin>>age;
    switch(age){
    case 0:
    cout<<"You have just born";
    break;
    case 1:
    cout<<"You have just celebrated your first brithday";
    break;
    case 14:
        cout<<"You can have your first ID in romania.";
        break;
    case 15:
        cout<<"You can be employed with your parents consent.";
        break;
    case 16:
        cout<<"You can have a drivers license for motorcycles with max 125cc.";
        break;
    case 17:
        cout<<"You can have a drivers license for all type of motorcycles.";
        break;
    case 18:
        cout<<"From now on you are considered an adult.";
        break;
    case 21:
        cout<<"You can drive heavy vehicles.";
        break;
    case 24:
        cout<<"You can drive buses.";
        break;
    case 35:
        cout<<"You can be elected as the President.";
        break;
    default:
        cout<<"Your age is not special.";}
    cout<<endl<<"Give me how many values an array can have:";
    int n;
    cin>>n;
    int arr1d[n],x=0;
    cout<<"Now give me "<<n<<" numbers:";
    for(int &i : arr1d)
        cin>>i;
    for(int i : arr1d)
        x+=i;
    cout<<"The sum of the elements of your array is "+x<<endl;
    cout<<"What type of car do you have?"<<endl;
    vector<string> cars={"BMW","Volkswagen","Ford"};
    bool carselected=false,match=false;
    string car;
    while (!carselected){
            string ans;
    for(string i : cars){
        cout <<i+" ";
    }
    cin>>ans;
    for(string i : cars){
        if(ans==i){
            car=ans;
            carselected=true;
            match=true;
            break;
        }
    }
    if(!match) cars.push_back(ans);
    }
    cout<<"Your car is a "+car<<endl;
    int income[12];
    cout<<"Type here your income for the past year month by month:";
    for(int &i : income)
        cin>>i;
        bool currencyselected=false;
        match=false;
        string currency;
    vector<string> currencies={"Dollar","Euro","Forint"};
    while (!currencyselected){
            string ans;
    for(string i : currencies){
        cout <<i+" ";
    }
    cin>>ans;
    for(string i : currencies){
        if(ans==i){
            currency=ans;
            currencyselected=true;
            match=true;
            break;
        }
    }
    if(!match) currencies.push_back(ans);
    }
    int sum,arrsize=sizeof(income)/sizeof(income[0]);
    for(int &i : income)
        sum+=i;
        float avg=static_cast<float>(sum)/arrsize;
        cout<<"Your mounthly avarage for the past year is "<<avg<<" "<<currency;
    return 0;
}
