#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a paragraph: ";
    string paragraph;
    getline(cin, paragraph);
    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
    paragraph.erase(remove_if(paragraph.begin(), paragraph.end(), ::ispunct), paragraph.end());
    unordered_map<string, int> wordFrequency;
    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        wordFrequency[word]++;
    }
    cout << "\nWord Frequencies:\n";
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
