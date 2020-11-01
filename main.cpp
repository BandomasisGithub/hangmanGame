#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <cstring>

using namespace std;

string gameNavigationInputWord();
//void menuNavigation();

int main() {
  
  // setup

  int wrongGuesses = 0;
  int rightGuess = 0;
  string gameNavigationCommand;
  vector<char> wronglyGuessedLetters;
  vector<string> wronglyGuessedWords;
  // word list

  vector<string> words;
  words.push_back("word");
  words.push_back("car");
  words.push_back("glasses");
  
  // choosing random word

  std::srand(static_cast<unsigned int>(time(0)));
  std::random_shuffle(words.begin(), words.end());
  string THE_WORD = words[0];

  // getting the ammount of guesses and encrypting the word

  int guessingWordSize = THE_WORD.size();
  int maxGuessAmmount = guessingWordSize * 2;
  string encryptedString(guessingWordSize, '-');

  gameNavigationCommand = gameNavigationInputWord();

  // main navigation 










  if(gameNavigationCommand == "guess")
  {
    //main function
    string playerGuess;
  
    while(encryptedString != THE_WORD && wrongGuesses < maxGuessAmmount)
    {

    std::cout << encryptedString << std::endl;
    std::cout << "Please guess a letter or a word:" << std::endl;
    std::cin >> playerGuess;

    int playerGuessSize = playerGuess.size();

      if(playerGuess == "exit") {

         gameNavigationInputWord();

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

          //std::cout << THE_WORD[i];
          if(THE_WORD[i] == playerGuessArray[0]) 
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
    
    std::cout << "To exit to the last menu write back" << std::endl;
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

  } else if(gameNavigationCommand == "exit")
  {
      
    return 0;

  } else 
  {
    std::cout << "There is no such comand" << std::endl;
    std::cout << "Please try to retype the comand" << std::endl;
    gameNavigationInputWord();
  };
















  if(encryptedString == THE_WORD) 
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
    std::cout << "Not gonna lie to you, I didn't even know this outcome was a possibility" << std::endl;
    std::cout << "So i guess the joke is on me afterall";

    return 0;
  };
}

string gameNavigationInputWord() 
{

  std::cout << "To guess a letter write guess" << std::endl;
  std::cout << "To see the rules write help" << std::endl;
  std::cout << "To exit the game write exit" << std::endl;
  
  string gameNavigationCommand;
  
  std::cin >> gameNavigationCommand;

  int gameNavigationSize = gameNavigationCommand.size();
  
  if(gameNavigationSize < 6)
  {
    for(int i = 0; i < gameNavigationSize; i++)
    {
      gameNavigationCommand[i] = tolower(gameNavigationCommand[i]);
    };

  } else
  {
    std::cout << "There is no such comand" << std::endl;
    std::cout << "Please try to retype the comand" << std::endl;
    gameNavigationInputWord();

  } 
  
  return gameNavigationCommand;
};

