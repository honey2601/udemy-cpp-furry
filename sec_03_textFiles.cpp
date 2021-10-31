#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;

    string outputFilename = "text.txt";
    outFile.open(outputFilename);

    if(outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else{
        cout << "Could not create file: "<< outputFilename <<endl;
    }
    return 0;
}