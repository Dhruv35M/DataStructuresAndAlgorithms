// remove all occurences of substring

#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string, string);

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<< removeOccurrences(s, part);
    return 0;
}

string removeOccurrences(string s, string part) {
    while(s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}