#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("morse.out");
    string text;
    getline(cin,text);
    vector <string> morse;
    for(char c:text)
    {
        switch(c){
        case 'A': case 'a': morse.push_back(".- ");
            break;
        case 'B': case 'b': morse.push_back("-... ");
            break;
        case 'C': case 'c': morse.push_back("-.-. ");
            break;
        case 'D': case 'd': morse.push_back("-.. ");
            break;
        case 'E': case 'e': morse.push_back(". ");
            break;
        case 'F': case 'f': morse.push_back("..-. ");
            break;
        case 'G': case 'g': morse.push_back("--. ");
            break;
        case 'H': case 'h': morse.push_back(".... ");
            break;
        case 'I': case 'i': morse.push_back(".. ");
            break;
        case 'J': case 'j': morse.push_back(".--- ");
        break;
        case 'K': case 'k': morse.push_back("-.- ");
            break;
        case 'L': case 'l': morse.push_back(".-.. ");
            break;
        case 'M': case 'm': morse.push_back("-- ");
            break;
        case 'N': case 'n': morse.push_back("-. ");
            break;
        case 'O': case 'o': morse.push_back("--- ");
            break;
        case 'P': case 'p': morse.push_back(".--. ");
            break;
        case 'Q': case 'q': morse.push_back("--.- ");
            break;
        case 'R': case 'r': morse.push_back(".-. ");
            break;
        case 'S': case 's': morse.push_back("... ");
            break;
        case 'T': case 't': morse.push_back("- ");
            break;
        case 'U': case 'u': morse.push_back("..- ");
            break;
        case 'V': case 'v': morse.push_back("...- ");
            break;
        case 'W': case 'w': morse.push_back(".-- ");
            break;
        case 'X': case 'x': morse.push_back("-..- ");
            break;
        case 'Y': case 'y': morse.push_back("-.-- ");
            break;
        case 'Z': case 'z': morse.push_back("--.. ");
            break;
        case ' ': morse.push_back(" / ");
            break;
        default:
            cout<<"There was an unexpected character in the input. \nExiting.";
            return 1;
            break;
        }

    }
    for(string &i:morse)
            out<<i;
    return 0;
}
