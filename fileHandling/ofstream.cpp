#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /*
    ofstream => file create 
    ifstream => read file 
    fstream => ofstream + ifstream
    */
   //       any_name
   ofstream createFile("text.txt", ios::app);
   createFile << "Hello world" << endl;

   ifstream readFile("text.txt");
   string output;
    while(getline(readFile, output)){
        cout << output << endl;
    }
    createFile.close();
    readFile.close();
   return 0;

}