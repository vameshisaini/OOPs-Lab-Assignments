#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("alpha.txt");
    for(char ch='A';ch<='Z';ch++)
        fout<<ch;
    fout.close();

    fstream file("alpha.txt",ios::in|ios::out);
    char ch;

    file.seekg(9);
    file.get(ch);
    cout<<"10th character: "<<ch<<endl;

    file.seekp(4);
    file.put('X');

    file.seekg(0,ios::end);
    cout<<"File size: "<<file.tellg()<<" bytes"<<endl;

    file.seekg(-1,ios::end);
    file.get(ch);
    cout<<"Last character: "<<ch<<endl;

    file.close();

    ofstream fout2("data.txt");
    fout2<<"Hello World\n";
    fout2<<"This is a test file\n";
    fout2<<"C++ File Handling";
    fout2.close();

    ifstream fin("data.txt");
    fin.seekg(9);

    cout<<"\nCurrent position: "<<fin.tellg()<<endl;
    cout<<"Remaining content:\n";

    while(fin.get(ch))
        cout<<ch;

    fin.close();
    return 0;
}
