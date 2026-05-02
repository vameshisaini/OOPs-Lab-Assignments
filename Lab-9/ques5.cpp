#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of string: " << length << endl;
    ofstream fout("data.txt");
    if (!fout) {
        cout << "Error creating file!";
        return 1;
    }
    fout << str;
    fout.close();
    ifstream fin("data.txt");
    if (!fin) {
        cout << "Error opening file!";
        return 1;
    }
    char ch;
    cout << "\nContent read from file:\n";
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();
    return 0;
}
