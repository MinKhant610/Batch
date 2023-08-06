#include <iostream>
using namespace std;

int main(){
    int game_point = 25;
    int user_point = 0;
    int roll = 0;
    int dice = 0;

    while(user_point != game_point){
        cout << "Enter 1 to roll dice : " ;
        cin >> roll ;
        dice = 1 + rand() %6;
        user_point = user_point + dice;
        cout << "Dice Number : " << dice << endl;

        if (user_point > 25){
            user_point = user_point - dice;
            cout << "Step back " << dice << "Point" << endl;
        }

        switch(user_point){
            case 2 :
            user_point = 8;
            cout << "You increase 6 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 4 :
            user_point = 7;
            cout << "You increase 3 points " << endl;
            cout << "Now you are in : " << user_point << endl; 
            break;

            case 9 :
            user_point = 2;
            cout << "You decrease 7 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 10 :
            user_point = 12;
            cout << "You increase 2 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 13 :
            user_point = 17;
            cout << "You increase 4 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 14 :
            user_point = 7;
            cout << "You decrease 7 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 18 :
            user_point = 23;
            cout << "You increase 5 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 19 :
            user_point = 11;
            cout << "You decrease 8 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;

            case 24 :
            user_point = 16 ;
            cout << "You increase 8 points " << endl;
            cout << "Now you are in : " << user_point << endl;
            break;
        }
    }
    cout << "Congrat You win the game " << endl;

    return 0;
}