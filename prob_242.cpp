#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cout << "ENETR STRING :- ";
    cin >> a;
    cout << "ENETR STRING :- ";
    cin >> b;

    if (a.size() != b.size())
    {
        cout << "FALSE";
        return 0;
    }

    int hash[26] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        hash[a[i] - 'a']++;
        hash[b[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] != 0)
        {
            cout << "FALSE";
            return 0;
        }
    }
    cout << "TRUE";
}