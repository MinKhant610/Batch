#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("text.txt");
    file << "Hello" << endl;
    file.close();
    string mytext;
    fstream readfile("text.txt");
    while(getline(readfile, mytext)){
        cout << mytext;
    }
    readfile.close();
    
}