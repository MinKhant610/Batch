#include <iostream>
using namespace std;

class Myclass{
    public:
    static void test(string name){
        cout << "hello "<< name << endl;
    }
};

int main(){
    Myclass::test("MinKhant");
    return 0;
}