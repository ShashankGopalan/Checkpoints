#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    int i;
    unordered_map<char, int> count;

    for (i = 0; i < str.length(); i++)
        count[str[i]]++;

    for (auto it : count)
        if (it.second > 1)
            cout << it.first << ", count = " << it.second << endl;
}

int main()
{
    string str;

    cin >> str;
    printDups(str);

    return 0;
}