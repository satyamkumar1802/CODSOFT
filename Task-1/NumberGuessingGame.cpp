#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    srand(time(0));

    int randomNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!!!" << endl;

    do{
        cout << "Enter your guess (between 1 to 10) : " << endl;
        cin >> guess;


        if(guess > randomNumber){
            cout << "Too high! Try again..." << endl;
        }
        else if(guess < randomNumber){
            cout << "To low! Try again..." << endl;
        }

        attempts++;
    }while(guess != randomNumber);{

        cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;

    }

    return 0;
}