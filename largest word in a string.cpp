#include <iostream>
#include <string>

using namespace std;

int main() {
    string shortest, longest, word;

    // Initialize shortest and longest to empty strings
    shortest = longest = "";
    word = "i am a good boy abhir raama";

    int wordStart = 0;  // Initialize the start of the current word

    for (int i = 0; i <= word.size(); i++) {
        // Check for space or end of the sentence
        if (i == word.size() || word[i] == ' ') {
            // Calculate the length of the current word
            int wordLength = i - wordStart;

            // Check if it's the longest or shortest word
            if (wordLength >= longest.size()) {
                longest = word.substr(wordStart, wordLength);
            } 
            if (shortest.empty() || wordLength <= shortest.size()) {
                shortest = word.substr(wordStart, wordLength);
            }

            // Update the start of the next word
            wordStart = i + 1;
        }
    }

    cout << "The longest word entered was '" << longest << "' with a length of " << longest.size() << " characters." << endl;
    cout << "The shortest word entered was '" << shortest << "' with a length of " << shortest.size() << " characters." << endl;

    return 0;
}

//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

int main() {
    string shortest, longest, word;

    cout << "Enter words (type 'exit' to quit): " << endl;

    // Initialize shortest and longest to empty strings
    shortest = longest = "";

    while (cin >> word && word != "exit") {
        if (word.size() > longest.size()) {
            longest = word; // Update longest if a longer word is entered
        } 
        if (shortest.empty() || word.size() < shortest.size()) {
            shortest = word; // Update shortest if it's empty or a shorter word is entered
        }
    }

    cout << "The longest word entered was '" << longest << "' with a length of " << longest.size() << " characters." << endl;
    cout << "The shortest word entered was '" << shortest << "' with a length of " << shortest.size() << " characters." << endl;

    return 0;
}
