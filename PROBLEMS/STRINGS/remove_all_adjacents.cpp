// remove all adjacents present in string

#include <iostream>
using namespace std;

string removeAdj(string s) {
    for(int i{0}; i<s.length()-1; i++) {
        string temp = "";
        temp += s[i];
        
        if(s[i] == s[i+1]) {
            temp += s[i+1];
            s.erase(s.find(temp), temp.length());
            i -= 1; // because string have been modified
        }
    }
    return s;
}

// unique characters
// string removeAdj(string s) {
//     int arr[25] = {0};
//     for(int i{0}; i<s.length(); i++) {
//         int ind = s[i] - 'a';
//         arr[ind]++;
//     }

//     string temp = "";
//     for(int i{0}; i<25; i++) {
//         if(arr[i] >= 1)
//             temp += (i + 'a');
//     }
//     return temp;
// }


int main() {
    // string s = "abbaca";
    string s = "aaaaaaaa";
    cout<< removeAdj(s);
    return 0;
}