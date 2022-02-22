#include <iostream>
using namespace std;
#include <vector>

int main() {
    string text;
    
    cout << "Type a sentence: ";
    getline(cin, text);
    
    int lenght = (int) text.length();
    
    vector< char > chars;
    
    for (int i = lenght; i > 0; i--) {
        char x = text.at(i -1);
        chars.push_back(x);
    }
    
    string s = "";
    for (char c : chars) {
        s = s + c;
    }
    
    cout << s + "\n";
    
    return 0;
}
