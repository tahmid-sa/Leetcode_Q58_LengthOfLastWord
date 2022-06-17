#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int lengthOfLastWord(string s);

int lengthOfLastWord(string s) {
    int length = 0;
    bool firstWord = false;

    for (auto iR = s.rbegin(); iR != s.rend(); iR++) {
        if (*iR != ' ') {
            length++;
        }

        if (length > 0 && *(iR + 1) == ' ') {
            return length;
        }
    }

    return length;
}

int main()
{
    string s = " ";
    cout << lengthOfLastWord(s);
    
    return 0;
} 
