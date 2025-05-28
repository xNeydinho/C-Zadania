#include <iostream>
#include <string>
using namespace std;

string GetTextFromUser() {
    string text;
    cout << "Podaj ciag znakow: ";
    getline(cin, text);
    return text;
}

string ReverseString(string text) {
    int left = 0;
    int right = text.length() - 1;
    while (left < right) {
        swap(text[left], text[right]);
        left++;
        right--;
    }
    return text;
}

void DisplayResult(string reversedText) {
    cout << "Odwrócony ciag znakow: " << reversedText << endl;
}

int main() {
    string original = GetTextFromUser();
    string reversed = ReverseString(original);
    DisplayResult(reversed);
}
