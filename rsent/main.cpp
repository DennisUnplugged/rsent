#include <iostream>
using namespace std;

int main() {
    string text;
    
    cout << "Type a sentence: ";
    getline(cin, text);
    
    int lenght = (int) text.length();
    
    for (int i = lenght; i > 0; i--) {
        cout << text.at(i - 1);
    }
    cout << "\n";
    
    return 0;
}
