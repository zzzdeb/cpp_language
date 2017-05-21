#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    string fname;
    if (argc != 2)
    {
        cout << "give file name" << endl;
        cin >> fname;
    }
    else
    {
        fname = argv[1];
    }
    ifstream f(fname.c_str());
    string word;

    ofstream result;
    result.open("abc.txt");
    while (!f.eof())
    {
        f >> word;
        size_t pos = word.find("\t");
        while(pos!=-1)
        {
            word.replace(pos,pos+1, "\n");
            pos = word.find("\t", pos+1);
        }
        cout << word << "\t";
    }
    return 0;
}