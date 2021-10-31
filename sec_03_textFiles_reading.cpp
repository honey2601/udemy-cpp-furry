#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;

    string inFilename = "text.txt";
    inFile.open(inFilename);

    if(inFile.is_open()) {
        string line;

        while(!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }
    else{
        cout << "Can't open file: "<< inFilename <<endl;
    }
    return 0;
}