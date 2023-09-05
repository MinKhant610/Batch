#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream dataFile("userData.txt", ios::app);

    string text;
    cout << "Enter text : ";
    getline(cin, text);
    dataFile << text << endl;
    cout << "data store successfully" << endl;
    dataFile.close();
    return 0;

}