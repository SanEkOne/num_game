#include <iostream>  
#include <ctime>  

using namespace std;

int main()
{
    srand(time(NULL));
    int randNumber = rand() % 101;
    //cout << randNumber << endl; 

    int number;
    cout << "Enter your number: " << endl;
    cin >> number;
    if (number != randNumber) {
        cout << "Enter your 2 number: " << endl;
        cin >> number;
        if (number != randNumber) {
            cout << "Enter your 3 number: " << endl;
            cin >> number;
            if (number != randNumber) {
                cout << "You lose: " << endl;
            }
            else {
                cout << "You Win!!!";
            }
        }
        else {
            cout << "You Win!!!";
        }
    }
    else {
        cout << "You Win!!!";
    }
}