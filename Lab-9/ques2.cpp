#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;
int countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;
    if (!fin) {
        cout << "Error opening file!";
        return -1;
    }
    while (fin.get(ch)) {
        if (isalpha(ch)) {
            count++;
        }
    }
    fin.close();
    return count;
}
int main() {
    int result = countAlphabets();
    if (result != -1)
        cout << "Number of alphabets: " << result;
    return 0;
}
