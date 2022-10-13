//
//  main.cpp
//  Wordle Game
//
//  Created by Dzuy Dang on 10/7/22.
//

#include <iostream>
using namespace std;

int main(){
    char arr [6];
    char arr2 [6];
    string word;
    string userResponse;
    string guess;
    string guessString;
    bool guessCheck;
    bool guessCheck1;
    int count;
    int guessNumber;
    
    
    cout << "Let's Play Wordle!";
    cout << endl << "Do you know how to play? Type Y for Yes or N for N." << endl;
    cin >> userResponse;
    if (userResponse == "N"){
        cout << endl << "Player 1 will input any 6-letter word. \n";
        cout << "Then, Player 2 will begin to guess. You will only have 6 tries to guess the word. \n";
        cout << "If the guessed word contains any of the letters in the keyword, \n";
        cout << "then the letters will be displayed as 'In word, wrong spot'. \n";
        cout << "If the guessed word contains the right letter, in the right spot, \n";
        cout << "then it will be displayed as 'In word, right spot' " << endl;
        cout << "Are you ready to play?" << endl << endl;
        do
         {
           cout << '\n' << "Press a key to continue...";
         } while (cin.get() != '\n');
    }
    
    cout << endl << "Let's Play!" << endl;
    cout << "Player 1, please enter in any 6-letter word. Player 2, no cheating! \n";
    
    do{
        cin >> word;
        guessCheck1 = true;
    if (word.length() != 6){
        guessCheck1 = false;
        cout << "You entered a " << word.length() << "-letter word. Please enter a 6-letter word. \n";
    }} while (guessCheck1 == false);
    //strcpy(arr, word.c_str());
    /*for (int i = 0; i<6;i++){
        cout << arr[i];
    }*/
    cout << endl << "Thank you Player 1! Player 2, it's time to play!" << endl;
    
    for (guessNumber = 0; guessNumber < 6; guessNumber++){
        cout << "Please enter guess number " << guessNumber+1 << ": " << endl;
        do{
        cin >> guess;
        guessCheck = true;
        if (guess.length() != 6){
            guessCheck = false;
            cout << "You entered a " << guess.length() << "-letter word. Please enter a 6-letter word. \n";
        }} while (guessCheck == false);
        
        strcpy(arr2 ,guess.c_str());
        strcpy(arr, word.c_str());
        
        //arr is the objective word
        //arr2 is the guessed word
        cout << endl;
        if ((arr2[0] == arr[0]) && (arr2[1] == arr[1]) && (arr2[2] == arr[2]) && (arr2[3] == arr[3]) && (arr2[4] == arr[4]) && (arr2[5] == arr[5])){
            cout << "You got it!" << endl;
            cout << "The word was ";
            for (int i = 0; i<6;i++){
                cout << arr[i];
            }
            cout << endl << "Great job!";
            break;
            }
        else{
            for (int i = 0; i<6; i++)
            {
                cout << arr2[i] << ": ";
                count = 0;
                for (int j = 0; j<6;j++)
                    {
                        if (arr2[i] == arr[j])
                            {
                                count++;
                                if ((arr2[i] == arr[j]) && (i==j))
                                    {
                                        cout << "right spot, ";
                                    }
                                }
                        
                    }
                cout << "in the word " << count << " times";
                cout << endl;
            }
        }
        
    }
}

    
    
    
    
    

