#include <iostream>
using namespace std;

class Myclass{

    /*
    Access Specifiers
    public => all 
    private => only in class
    protected => sub or extend class
    */
   
   // Encapsulation
   private:
   int age ;

   public :
   string name;

   void setAge(int age){ // setter
    this->age = age;
   }

   void getAge(){ // getter
    cout << this->age << endl;
   }

};

int main(){
    Myclass myObj;
    
    myObj.setAge(19);
    myObj.getAge();
}