#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> a = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<char>::iterator it = a.begin();
    while (it != a.end())
    {
        cout << *it << endl;
        it++;
    }
    cout << endl;
    for (vector<char>::reverse_iterator jt = a.rbegin(); jt != a.rend(); jt++)
    {
        cout << *jt << endl;
        cout << *((jt + 1).base()) << endl;
    }
    cout << "aa" << endl;
    return 0;
}