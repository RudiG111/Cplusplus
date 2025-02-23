#include <iostream>
#include <algorithm>
#include <vector>
#include <unistd.h>
#include <cstdlib> //if not using on windows that remove this library
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
    cout<<endl;
    for (int i : arr) cout << i << " ";
    while(!sorted)
      {
      sleep(5);
      nr++;
      for(int i=0;i<n-1;i++)
      {if(arr[i]>arr[i+1]){ sorted=false;
      break;}
      else sorted=true;}
      switch (nr){
      case 1:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Is it done yet? Nope. Still waiting..." << endl;
        break;
    case 2:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Patience is a virtue. Or so they say." << endl;
        break;
    case 3:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "How about a quick game of chess while you wait?" << endl;
        break;
    case 4:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Have you tried sacrificing a goat to the algorithm gods?" << endl;
        break;
    case 5:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The universe is unfolding as it should. Probably." << endl;
        break;
    case 6:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Maybe it's working in another timeline." << endl;
        break;
    case 7:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The sorting fairies are on strike. Please hold." << endl;
        break;
    case 8:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "It's not slow; it's just... methodical." << endl;
        break;
    case 9:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The algorithm is pondering the meaning of existence." << endl;
        break;
    case 10:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "How about I tell you about today's sponsor? \n Raid Shadow Legends. You already know it." << endl;
        break;
    case 11:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Loading... Please wait. (Insert progress bar here)" << endl;
        break;
    case 12:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Use code KNK on clash." << endl;
        break;
    case 13:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "Nature is calling me. I'll be right back" << endl;
        break;
    case 14:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "If this actually works you may need to consider \n buying a lottery ticket." << endl;
        break;
    case 15:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The process is taking a nap. It'll continue when it wakes up." << endl;
        break;
    case 16:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The algorithm is waiting for a sign from the cosmos." << endl;
        break;
    case 17:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The process is waiting for its favorite song to come on." << endl;
        break;
        case 18:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The algorithm is waiting for the perfect moment to strike." << endl;
    case 19:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The process is waiting for a butterfly to flap its wings." << endl;
        break;
    case 20:
        system("CLS");
        for (int i : arr) cout << i << " ";
        cout << endl << "The algorithm is waiting for inspiration to strike." << endl;
        nr=1;
        break;
      }
    }
    return 0;
}
