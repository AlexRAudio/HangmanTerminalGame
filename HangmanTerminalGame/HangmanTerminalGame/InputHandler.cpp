// InputHandler.cpp
// Student: Alexander Hynes (01500998)
//
// MultiMdeia C++ Project Assignment
// 6525STE
//
// Marking Tutor: Henry Bourne
// 27th April 2018

#include "InputHandler.hpp"



// Obtain user's guess and check validity. Loop until a valid guess is entered
void InputHandler::setUserInputGuess(std::string m_InputString)
{
    do {
        getline(std::cin, m_InputString);
        
    } while (!checkUserInputGuess(m_InputString));
}

// TODO enrich the code here to trial whether the letter is part of word or not
std::string InputHandler::getUserInputGuess()
{
    return m_InputGuess;
}

// TODO Enrich user feedbck with Enumerators!
bool InputHandler::checkUserInputGuess(std::string m_InputString)
{
    FeedbackManager feedbackManager;
    if ((m_InputString.length() == 1)) {
        const char *cstr = m_InputString.c_str();
        if (isalpha	(*cstr)) {
            // User Input is valid
            b_isValidInput = true;
        }
        else {
            // User Input is NOT valid, then print error message
            b_isValidInput = false;
            feedbackManager.printInvalidInputMessage();
        }
    }
    else
    {
        // User Input is NOT valid, then print error message
        b_isValidInput = false;
        feedbackManager.printInvalidInputMessage();
    }
    return b_isValidInput;
}


// Check if user wants to retry game, with validity check.
void InputHandler::setRetryGame(std::string input)
{
    bool b_tempLoopCheck = true;
    do {
        if (input == "Y" && input == "y") {
            b_wantsNewGame = true;
            b_tempLoopCheck = false;
        }
        else if (input == "N" && input == "n"){
            b_wantsNewGame = false;
            b_tempLoopCheck = false;
        }
        else
        {
            b_tempLoopCheck = true;
        }
    } while (b_tempLoopCheck);
}

bool InputHandler::getRetryGame()
{
    return b_wantsNewGame;
}
