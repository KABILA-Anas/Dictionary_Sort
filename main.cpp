#include <bits/stdc++.h>

using namespace std;

ostream& operator<<(ostream& os, const vector<string>& v)
{
    cout << endl;
    cout << "[ ";
    for (auto i = v.begin(); i < v.end(); i++)
    {
        os << *i << " ";
    }
    cout << "]" << endl;
    return os;
}

int main()
{
    string mots;
    vector<string> v;

    ifstream MyFile("dict.txt");

    ///Read line by line
    while (getline (MyFile, mots))
        v.push_back(mots);

    MyFile.close();

    cout << "Avant sort :" << endl;
    for(auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << endl;
    }

    sort(v.begin(), v.end());///Sort of file content

    cout << endl;

    cout << "Apres sort :" << endl;
    for(auto i = v.begin(); i < v.end(); i++)
        cout << *i << endl;

    ofstream NewFile("Newdict.txt");
    ///write in file
    for(auto i = v.begin(); i < v.end(); i++)
        NewFile << *i << endl;

    NewFile.close();

    return 0;
}
