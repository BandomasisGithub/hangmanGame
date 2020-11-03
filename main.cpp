#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <cstring>

using namespace std;
//enum
//the word
//encriptedString
//maxGuessAmmount
//wrongGuesses
//wrongGuessesLetters ???


struct hangmanData {
  string word;
  string encriptedString;
  int maxGuessAmmount;
  int guessingWordSize;
  bool gameState;
} mainData;



void gameNavigationInputWord();
void randomGuesingWord(vector<string> words);
void guessingLoop(string theWord);
int gameEndingMessage();
void gameHelp();
//void menuNavigation();

int main() {
  
  // seting up guessing word array

  vector<string> words;
  words.push_back("word");
  words.push_back("car");
  words.push_back("glasses");


  //int wrongGuesses = 0;
  //int rightGuess = 0;
  //string gameNavigationCommand;
  //vector<char> wronglyGuessedLetters;
  //vector<string> wronglyGuessedWords;
  // word list
  
  // choosing random word and writes in mainData (hangmanData struct)
  randomGuesingWord(words);

  // game navigation
  gameNavigationInputWord();

  




  /*
  std::srand(static_cast<unsigned int>(time(0)));
  std::random_shuffle(words.begin(), words.end());
  string theWord = words[0];
  */

  // getting the ammount of guesses and encrypting the word



  // kam man reikia atlikt skaiciavimus dar pries pati zaidima???

  /*
  int guessingWordSize = theWord.size();
  int maxGuessAmmount = guessingWordSize * 2;
  string encryptedString(guessingWordSize, '-');
  */


  

  // main navigation 









/*
  if(gameNavigationCommand == "guess")
  {
    //main function
    string playerGuess;
  
    while(encryptedString != theWord && wrongGuesses < maxGuessAmmount)
    {

      std::cout << encryptedString << std::endl;
      std::cout << "Please guess a letter or a word:" << std::endl;
      std::cin >> playerGuess;

      int playerGuessSize = playerGuess.size();

      if(playerGuess == "exit") {

        continue;

      }else if(playerGuessSize == 0)
      {
        std::cout << "Please enter at least one letter to guess";

      } else if(playerGuessSize == 1)
      {
        //check if the letter is corect


        // what does this code do exactly????

        char *playerGuessArray = new char[1];
        strcpy(playerGuessArray, playerGuess.c_str());

        for(int i = 0; i < guessingWordSize; i++)
        {

          //std::cout << theWord[i];
          if(theWord[i] == playerGuessArray[0]) 
          {  
            encryptedString[i] = playerGuessArray[0];
            rightGuess += 1;
          };
        }

        if(rightGuess > 0)
        {
          std::cout << "You guessed " << playerGuess << " letter corectly" << std::endl;
          rightGuess = 0;
        } else 
        {
          std::cout << "Wrong guess" << std::endl;
          std::cout << "The word doesn't have the letter " << playerGuess << std::endl;
          wronglyGuessedLetters.push_back(playerGuessArray[0]);
          wrongGuesses += 1;
        }

        delete [] playerGuessArray;

      } else 
      {
        std::cout << "You guessed the wrong word";
        wronglyGuessedWords.push_back(playerGuess);
        wrongGuesses += 1;
      };
    };


  } else if(gameNavigationCommand == "help") 
  {
    
    std::cout << "To exit to the menu write back" << std::endl;
    std::cout << std::endl;

    std::cout << "Game rules: " << std::endl;

    std::cout << "1. If you guess a letter and the word has" 
    << " it, you will be shown a letter in the word and it won't count" 
    << " to guess number" << std::endl;

    std::cout << "2. If you guess a letter wrong, it will be shown to" 
    <<" your guess count and wrongly guessed letters" << std::endl;

    std::cout << "3. If you guess more than one letter it " 
    << "will be counted as a word guess" << std::endl;

    std::cout << "4. If you guess the word wrongly it will" 
    << " be counted to your guess count and shown " 
    << "as wrong words guessed" << std::endl;

    std::cout << "5. If you guess the word correctly" 
    << " you win the game" << std::endl;

    std::cout << "6. If you run out of guess count you loose" << std::endl; 

    string playerBackComand;

    std::cin >> playerBackComand;

    if(playerBackComand == "exit")
    {
      continue;
    } 

  } else if(gameNavigationCommand == "exit")
  {

    std::cout << "Ok go have a \"poductive\" day" << std::endl;  

    return 0;

  } else 
  {
    std::cout << "There is no such comand" << std::endl;
    std::cout << "Please try to retype the comand" << std::endl;
    //gameNavigationInputWord();
  };
  */









/*
  if(encryptedString == theWord) 
  {
    std::cout << "Congrats, you win. So you might ask what is your prize?" << std::endl;
    std::cout << "Oh I just guessed if you might ask that, there is no prize" << std::endl;
    std::cout << "Even when you win, you loose and that is what people call life" << std::endl;
    std::cout << "Welcome to the world newborn, it sucks here and it is your problem now" << std::endl;
    std::cout << "So in some weird way you got something after all for wining the game" << std::endl;
    std::cout << "The most important prize - knowledge" << std::endl;
    std::cout << "Knowledge that everything and everyone sucks" << std::endl;
    std::cout << "Not to beat a dead horse, but it still feels like you lost even when you won" << std::endl;
    std::cout << "Huh? You might say" << std::endl;
    std::cout << "Life's a bitch and then you die" << std::endl;
    std::cout << "That's why we get high" << std::endl;
    std::cout << "Sorry i got sidetracked what was i tallking about oh right" << std::endl;
    std::cout << "Legalize pot and free tibet or some shit like that" << std::endl;

    return 0;
  } else if (wrongGuesses > maxGuessAmmount)
  {
    std::cout << "In c++ std means standart library not the other thing you weirdo" << std::endl;
    std::cout << "Oh yeah and you loose, you oposite of winer";

    return 0;
  } else
  {
    std::cout << "Ok go have a \"poductive\" day" << std::endl;

    return 0;
  };
*/
};



void randomGuesingWord(vector<string> words)
{
  std::srand(static_cast<unsigned int>(time(0)));
  std::random_shuffle(words.begin(), words.end());
  string theWord = words[0];
  mainData.word = theWord;

  mainData.guessingWordSize = theWord.size();
  mainData.maxGuessAmmount = mainData.guessingWordSize * 2;

  string encriptedString(mainData.guessingWordSize, '-');
  mainData.encriptedString = encriptedString;
  mainData.gameState = true;
};



void gameNavigationInputWord() 
{

  std::cout << "To guess a letter write guess" << std::endl;
  std::cout << "To see the rules write help" << std::endl;
  std::cout << "To exit the game write exit" << std::endl;
  
  mainNavigation();
  
}

void mainNavigation()
{
  string menuNavigationCommand;
  std::cin >> menuNavigationCommand;
  int menuNavigationSize = menuNavigationCommand.size();

  // For Loop eliminates the need for checking capital and small letters
  for(int i = 0; i < menuNavigationSize; i++)
  {
    menuNavigationCommand[i] = tolower(menuNavigationCommand[i]);
  };

  if(menuNavigationCommand == "guess")
  {
    guessingLoop(mainData.word);

  } else if(menuNavigationCommand == "help") 
  {
    gameHelp();

  } else if(menuNavigationCommand == "exit")
  {

  } else 
  {
    std::cout << "There is no such comand" << std::endl;
    std::cout << "Please try to retype the comand" << std::endl;
    mainNavigation();
  }; 
};






//gameReloop

void gameEndReloop()
{
  string playersChoise;

  std::cout << "If you want to restart the game press 1" << std::endl;
  std::cout << "If you want to start a new game press 2" << std::endl;
  std::cout << "If you want to go back to menu press 3" << std::endl;
  std::cout << "If you want to exit the game press 4" << std::endl;

  startOfGameEndReloop:

  std::cin >> playersChoise;

  if(playersChoise == "1")
  {
    //should reuse the same word from before


  } else if(playersChoise == "2") 
  {
    //should use a new word

  } else if(playersChoise == "3") 
  {
    // goes back to menu
    gameNavigationInputWord();
    //!!!THIS MIGHT GET SLOWER FOR EVERY GAME PLAYED
    //BECAUSE THE EARLIER GAMENAVIGATIONIMPUTWORD() FUNCTIONS DOESNT STOP
    //IT PILES ON IT SHOUDN'T BE A BIG PROBLEM FOR THIS LITTLE PROGRAM
    //BUT FOR BIGGER PROGRAMS IT MAY USE TO MANY RESOUCES

  }else if(playersChoise == "4")
  {
    // exit the terminal(the game)
  }else 
  {
    std::cout << "Please choose existing comand" << std::endl;
    goto startOfGameEndReloop;
  };
};














//enum
//the word
//encriptedString
//maxGuessAmmount
//wrongGuesses
//wrongGuessesLetters ???

int gameEndingMessage()
{
  if(mainData.encriptedString == mainData.word) 
  {
    std::cout << "Congrats, you win. So you might ask what is your prize?" << std::endl;
    std::cout << "Oh I just guessed if you might ask that, there is no prize" << std::endl;
    std::cout << "Even when you win, you loose and that is what people call life" << std::endl;
    std::cout << "Welcome to the world newborn, it sucks here and it is your problem now" << std::endl;
    std::cout << "So in some weird way you got something after all for wining the game" << std::endl;
    std::cout << "The most important prize - knowledge" << std::endl;
    std::cout << "Knowledge that everything and everyone sucks" << std::endl;
    std::cout << "Not to beat a dead horse, but it still feels like you lost even when you won" << std::endl;
    std::cout << "Huh? You might say" << std::endl;
    std::cout << "Life's a bitch and then you die" << std::endl;
    std::cout << "That's why we get high" << std::endl;
    std::cout << "Sorry i got sidetracked what was i tallking about oh right" << std::endl;
    std::cout << "Legalize pot and free tibet or some shit like that" << std::endl;

    return 0;
  } else if (mainData.gameState == false)
  {
    std::cout << "In c++ std means standart library not the other thing you weirdo" << std::endl;
    std::cout << "Oh yeah and you loose, you oposite of a winer";

    return 0;
  } else
  {
    std::cout << "Ok go have a \"poductive\" day" << std::endl;

    return 0;
  };
}


void guessingLoop(string theWord)
{

    //main function
    
    string playerGuess;
    int rightGuess = 0;
    int wrongGuesses = 0;
    mainData.gameState = false;
    vector<string> wrongLetters;
    vector<string> wrongWords;

    //words.push_back("word");
    
    while(mainData.encriptedString != mainData.word && wrongGuesses < mainData.maxGuessAmmount)
    {

      std::cout << mainData.encriptedString << std::endl;
      std::cout << "Please guess a letter or a word:" << std::endl;
      std::cin >> playerGuess;

      int playerGuessSize = playerGuess.size();

      if(playerGuessSize == 0)
      {
        std::cout << "Please enter a word or at least one letter to guess";

      } else if(playerGuessSize == 1)
      {
        //check if the letter is corect

        char *playerGuessArray = new char[1];
        strcpy(playerGuessArray, playerGuess.c_str());

        for(int i = 0; i < mainData.guessingWordSize; i++)
        {

          //std::cout << theWord[i];
          if(theWord[i] == playerGuessArray[0]) 
          {  
            mainData.encriptedString[i] = playerGuessArray[0];
            rightGuess += 1;
          };
        };

        if(rightGuess > 0)
        {
          std::cout << "You guessed " << playerGuess << " letter corectly" << std::endl;
          rightGuess = 0;
        } else 
        {
          std::cout << "Wrong guess" << std::endl;
          std::cout << "The word doesn't have the letter " << playerGuess << std::endl;
          wrongLetters.push_back(playerGuess);
          wronglyGuessedLetters.push_back(playerGuessArray[0]);
          wrongGuesses += 1;
        };

        delete [] playerGuessArray;

      } else if(playerGuessSize > 1)
      {
        if(playerGuess == theWord)  
        {
          std::cout << "You guesed the word corectly";

        }


      } else 
      {
        std::cout << "You guessed the wrong word";
        wronglyGuessedWords.push_back(playerGuess);
        wrongGuesses += 1;
      };
};

void gameHelp()
{
    
    std::cout << "To exit to the previos menu press 1" << std::endl;
    std::cout << std::endl;

    std::cout << "Game rules: " << std::endl;

    std::cout << "1. If you guess a letter and the word has" 
    << " it, you will be shown a letter in the word and it won't count" 
    << " to guess number" << std::endl;

    std::cout << "2. If you guess a letter wrong, it will be shown to" 
    <<" your guess count and wrongly guessed letters" << std::endl;

    std::cout << "3. If you guess more than one letter it " 
    << "will be counted as a word guess" << std::endl;

    std::cout << "4. If you guess the word wrongly it will" 
    << " be counted to your guess count and shown " 
    << "as wrong words guessed" << std::endl;

    std::cout << "5. If you guess the word correctly" 
    << " you win the game" << std::endl;

    std::cout << "6. If you run out of guess count you loose" << std::endl; 

    string playerBackComand;

    std::cin >> playerBackComand;

    if(playerBackComand == "1")
    {
      gameNavigationInputWord();
    };
};
















// TO DO:

//after game ending for right guess or wrong ask if player wants to play again
//ask if i am an idiot
//show the player wrong guessed letters