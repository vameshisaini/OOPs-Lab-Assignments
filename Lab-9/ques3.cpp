#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("source.txt");
    if (!fin) {
        cout << "Source file not found!";
        return 1;
    }
    ofstream fout("destination.txt");
    if (!fout) {
        cout << "Destination file cannot be created!";
        return 1;
    }
    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }
    cout << "File copied successfully!";
    return 0;
}
