#include <iostream>
#include "Solution.h"

int main() {
    std::string str1 = "Hello World";
    std::string str2 = "   fly me   to   the moon  ";
    std::string str3 = "luffy is still joyboy";

    Solution solution;

    std::cout << solution.lengthOfLastWord(str1) << std::endl;
    std::cout << solution.lengthOfLastWord(str2) << std::endl;
    std::cout << solution.lengthOfLastWord(str3) << std::endl;

    return 0;
}
