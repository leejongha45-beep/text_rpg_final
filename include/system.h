#pragma once

#include <iostream>
#include <cstdlib>
#include <limits> 

// =================================================================
// 1. CLS (Clear Screen) 함수
// =================================================================
inline void cls() { // 💡 여기에 inline 키워드 추가
    #if defined(__APPLE__) || defined(__linux__)
        system("clear");
    #elif defined(_WIN32)
        system("cls");
    #else
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    #endif
}

// =================================================================
// 2. PAUSE (일시 정지) 함수
// =================================================================
inline void pause() { // 💡 여기에 inline 키워드 추가
    std::cout << "\n계속하려면 Enter 키를 누르세요...\n";

    #if defined(__APPLE__) || defined(__linux__)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get(); 
    #elif defined(_WIN32)
        system("pause");
    #else
        std::cin.get();
    #endif
}