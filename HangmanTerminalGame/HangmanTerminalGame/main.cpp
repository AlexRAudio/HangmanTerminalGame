// main.cpp
// Student: Alexander Hynes (01500998)
//
// MultiMdeia C++ Project Assignment
// 6525STE
//
// Marking Tutor: Henry Bourne
// 27th April 2018

#include <iostream>
#include "InputHandler.hpp"
#include "ArtManager.hpp"

int main(int argc, const char * argv[]) {
    
    
    
    InputHandler inputHandler;
    ArtManager artManager;
    FeedbackManager feedbackManager;
    std::string input;
    
    //  Print Introduction + ASCI art starting point.
    artManager.printHangmanGallowsArt();
    feedbackManager.printGameIntroduction();
    
    //  Print instructions on playing the game (explains rules)
    feedbackManager.printGameRules();
    
    
    
    //  Difficulty select (longer words being more difficult)
    //  Difficulties from 'Easy', 'Medium', to 'Hard'

    //  Start new game instance (LOOP)
    do {
        inputHandler.setUserInputGuess(input);
        inputHandler.getUserInputGuess();
        inputHandler.setRetryGame(input);
    } while (inputHandler.getRetryGame());


    
    

    
        //  Select word at random, from difficulty selection
    
        //  Print output
    
        //  {
        //  Get user input for the game (LOOP)
            //  Validate checking on user input
                //  If in valid return error message
                //  If valid, compare to randomly selected word
    
            //  Feedback for the given with ASCI art assets
            //  Print hangman art
            //  Print letters + underscore 'blank' characters
        //  Keep count on the characters guessed/remaining parts of the hangman ASCI art
        //  } on either losing or winning game, BREAK LOOP
    
        //  If won
        //  Print victory message
        //  Else if lost
        //  Print Defeat message
    
        //  Prompt user for another game or to quit application
    
    //  End application
    
    
    
}
