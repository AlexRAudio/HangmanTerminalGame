// FeedbackManager.cpp
// Student: Alexander Hynes (01500998)
//
// MultiMdeia C++ Project Assignment
// 6525STE
//
// Marking Tutor: Henry Bourne
// 27th April 2018

#include "FeedbackManager.hpp"

void FeedbackManager::printGameRules()
{
    std::cout << "\n";
    std::cout << "To win the game you must guess the word!";
    std::cout << "\n";
    std::cout << "Note: All words are isograms.";

    
}

void FeedbackManager::printInvalidInputMessage()
{
    std::cout << "\n";
    std::cout << "Please only enter single letters from the alphabet!";
    std::cout << "\n";
    std::cout << "Try Again!";
    std::cout << "\n";
}

void FeedbackManager::printGameIntroduction()
{
    std::cout << "\n";
    std::cout << "Hi and welcome to Hangman!";
    std::cout << "\n";
    std::cout << "\n";
}
