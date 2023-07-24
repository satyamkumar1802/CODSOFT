#include<iostream>
using namespace std;

int main(){

    double val1,val2;
    char operation;

    cout << "Enter the First Number: " << endl;
    cin >> val1;

    cout << "Enter the Second Number: " << endl;
    cin >> val2;

    cout << "Enter the Operation(+,-,*,/): " << endl;
    cin >> operation;

    double output;

    switch(operation){
        case '+':
        output = (val1 + val2);
        cout << "Output: " << output << endl;
        break;

        case '-':
        output = (val1 - val2);
        cout << "Output: " << output << endl;
        break;

        case '*':
        output = (val1 * val2);
        cout << "Output: " << output << endl;
        break;

        case '/':
        if(val2 != 0){
            output = (val1 / val2);
            cout << "Output: " << output << endl;
        }
        else{
            cout << "Error detected! " << endl;
        }
        break;

        default:
        cout << "Enter a valid operation... " << endl;
        break;
    }

    return 0;

}