#include <iostream>
using namespace std;

namespace firstone{
    void fun(){
        cout << "This is first fun " << endl;
    }
    void test(){
        cout << "This is test fun " << endl;
    }
}

using namespace firstone;
int main(){
    fun();
    test();
    return 0;
}