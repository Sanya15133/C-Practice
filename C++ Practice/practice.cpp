#include <iostream>
#include <limits>

int main()
{
    std::cout << "Here is some text,";
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any characters in the input buffer until newline
    std::cin.get(); // get 1 more char from user = wait for user to press enter;
    return 0;
}

