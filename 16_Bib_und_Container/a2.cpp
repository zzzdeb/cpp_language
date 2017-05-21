#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool initial(string it)
{
    return it.at(0) == 'a';
}

int main(int c, char **v)
{
    vector<string> a;
    string temp;
    for (int i = 0; i < atoi(v[1]); i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    vector<string>::iterator it = find_if(a.begin(), a.end(), initial);
    //test
    cout << *(find_if(a.rbegin(), a.rend(), initial).base()) << endl;
    //a3
    vector<string>::iterator jt = find_if(a.rbegin(), a.rend(), initial).base();
    while (it != jt)
    {
        cout << *it << endl;
        it++;
    }
    //a4
    // a.erase(it, jt);

    // it = a.begin();
    // while (it != a.end())
    // {
    //     cout << *it << endl;
    //     it++;
    // }
    // cout << endl;

    // for (vector<char>::reverse_iterator kt = a.rbegin(); kt != a.rend(); kt++)
    // {
    //     cout << *kt << endl;
    //     // cout << *((jt + 1).base()) << endl;
    // }
    return 0;
}