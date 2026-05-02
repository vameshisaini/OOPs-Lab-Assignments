#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("data.txt");

    if(!fin)
    {
        cout<<"Error opening file!";
        return 1;
    }

    char ch;
    int characters=0, words=0, lines=0;

    while(fin.get(ch))
    {
        characters++;

        if(ch==' ' || ch=='\n')
            words++;

        if(ch=='\n')
            lines++;
    }

    if(characters>0)
        words++;

    cout<<"Characters: "<<characters<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Lines: "<<lines<<endl;

    fin.close();
    return 0;
}
