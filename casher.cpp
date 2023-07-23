#include <iostream>
using namespace std;

int main(){
    int Lion = 500;
    int Royal_D = 1000;
    int Tiger = 2000;
    int chart, pay_money, cash_back;

    cout << "-----------------------------" << endl;
    cout << "1 Lion " << endl;
    cout << "2 Royal D " << endl;
    cout << "3 Tiger " << endl;
    cout << "-----------------------------" << endl;
    cout << "Add to chart (1 - 3 ) : ";
    cin >> chart;

    switch(chart){
        case 1 :
        cout << "Enter money : ";
        cin >> pay_money;
        cash_back = pay_money - Lion;
        cout << "Your cash back : " << cash_back;
        break;

        case 2 :
        cout << "Enter money : ";
        cin >> pay_money;
        cash_back = pay_money - Royal_D;
        cout << "Your cash back : " << cash_back;
        break;

        case 3 :
        cout << "Enter money : ";
        cin >> pay_money;
        cash_back = pay_money - Tiger;
        cout << "Your cash back : " << cash_back;
        break;
    }
    return 0;
}