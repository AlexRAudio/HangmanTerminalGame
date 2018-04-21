// InputHandler.hpp
// Student: Alexander Hynes (01500998)
//
// MultiMdeia C++ Project Assignment
// 6525STE
//
// Marking Tutor: Henry Bourne
// 27th April 2018

#ifndef InputHandler_hpp
#define InputHandler_hpp

#include <string>
#include <cctype>
#include "FeedbackManager.hpp"
#include "InputHandler.hpp"

class InputHandler {
private:
    std::string m_InputGuess;
    std::string m_wantsToRetry;
    bool b_isValidInput;
    bool b_wantsNewGame;
public:
    
    // Get and validate user input
    void setUserInputGuess(std::string m_InputGuess);
    bool checkUserInputGuess(std::string inputGuess);
    std::string getUserInputGuess();
    void setRetryGame(std::string input);
    bool getRetryGame();
};


#include <stdio.h>

#endif /* InputHandler_hpp */
