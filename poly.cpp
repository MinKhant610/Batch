// Polymorphism
#include <iostream>
using namespace std;

class Car{
    public :
    void hoon(){
        cout << "Pwan Pwan" << endl;
    }

    void wheeel(){
        cout << "4 wheels" << endl;
    }
};


class Lambo : public Car{
    public :
    void name(){
        cout << "I am lambo " << endl;
    }
};

class GTR : public Car{
    public :
    void name(){
        cout << "I am GTR35 " << endl;
    }
};

class Supera : public Car{
    public :
    void name(){
        cout << "I am Supera " << endl;
    }
};

int main(){
    Supera superaObj;
    superaObj.hoon();
    superaObj.name();

    GTR gtrObj;
    gtrObj.hoon();
    gtrObj.name();

    return 0;
}