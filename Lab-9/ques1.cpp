#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;          
    fout.open("NUM.TXT");      
    if (!fout) {
        cout << "Error opening file!";
        return 1;
    }
    for (int i = 1; i <= 200; i++) {
        fout << i << endl;     
    }
    fout.close();            
    cout << "Numbers written successfully to NUM.TXT";
    return 0;
}
