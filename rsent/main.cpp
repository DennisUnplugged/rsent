#include <iostream>
using namespace std;

int main() {
    string text;
    
    cout << "Type a sentence: ";
    getline(cin, text);
    
    for (int i = (int) text.length(); i > 0; i--) {
        cout << text.at(i - 1);
    }
    cout << "\n";
    
    return 0;
}
