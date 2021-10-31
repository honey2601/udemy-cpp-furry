#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    if(true) {
        static int i= 0;
        i++;
        cout << i << "\r\n";
    }

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}