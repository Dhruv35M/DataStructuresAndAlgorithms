// replace all spaces with @40

#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(string s);

int main() {

    string s;
    cout<<"enter a sentence: ";
    getline(cin, s);
    cout<< replaceSpaces(s);

    return 0;
}

string replaceSpaces(string s) {
    string temp = "";
    for(int i{0}; i<s.length(); i++) {
        if(s[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(s[i]);
        }
    }
    return temp;
}