#include "cls_string.h"

int main() {
    ClsString myString("  Hello, World! Welcome to C++ Programming.  ");

    cout << "===== MEMBER FUNCTIONS =====" << endl << endl;

    // Original
    cout << "Original: '" << myString.getValue() << "'" << endl << endl;

    // Uppercase
    myString.upperAllString();
    cout << "Uppercase: '" << myString.getValue() << "'" << endl << endl;

    // Lowercase
    myString.lowerAllString();
    cout << "Lowercase: '" << myString.getValue() << "'" << endl << endl;

    // Left trim
    myString.trimLeft();
    cout << "Left trim: '" << myString.getValue() << "'" << endl << endl;

    // Right trim
    myString.trimRight();
    cout << "Right trim: '" << myString.getValue() << "'" << endl << endl;

    // Full trim
    myString.trim();
    cout << "Full trim: '" << myString.getValue() << "'" << endl << endl;

    // Reverse words
    myString.reverseWordsInString();
    cout << "Reversed words: '" << myString.getValue() << "'" << endl << endl;

    // Replace word
    myString.replace("c++", "Python", false);
    cout << "Replace 'c++': '" << myString.getValue() << "'" << endl << endl;

    // Remove punctuation
    myString.removePunctuationsFromString();
    cout << "No punctuation: '" << myString.getValue() << "'" << endl << endl;

    // --- Static methods demonstration ---
    cout << "===== STATIC FUNCTIONS =====" << endl << endl;

    string testStr = "   split,this,string,example   ";

    // Original
    cout << "Original: '" << testStr << "'" << endl << endl;

    // Split
    vector<string> words = ClsString::splitString(ClsString::trim(testStr), ",");
    cout << "Split:" << endl;
    for (const string& w : words) {
        cout << w << endl;
    }    
    cout << endl;

    // Join
    string joined = ClsString::joinString(words, " | ");
    cout << "Joined: '" << joined << "'" << endl << endl;

    // Reverse
    string reversedWords = ClsString::reverseWordsInString("One two three four");
    cout << "Reversed: '" << reversedWords << "'" << endl << endl;

    // Replace
    string replacedStr = ClsString::replace("I love programming in Python", "Python", "C++", true);
    cout << "Replace static: '" << replacedStr << "'" << endl << endl;

    // Remove punctuation
    string cleanStr = ClsString::removePunctuationsFromString("Hello!!! How are you???");
    cout << "No punctuation static: '" << cleanStr << "'" << endl << endl;

    system("pause>0");
    return 0;
}