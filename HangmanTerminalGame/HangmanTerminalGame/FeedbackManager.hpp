// FeedbackManager.hpp
// Student: Alexander Hynes (01500998)
//
// MultiMdeia C++ Project Assignment
// 6525STE
//
// Marking Tutor: Henry Bourne
// 27th April 2018

#ifndef FeedbackManager_hpp
#define FeedbackManager_hpp

#include <stdio.h>
#include <iostream>

class FeedbackManager {

    
public:
    void printGameIntroduction();
    void printGameRules();
    
    // Prints error message for when user enters an invalid input
    void printInvalidInputMessage();
};


#endif /* FeedbackManager_hpp */
