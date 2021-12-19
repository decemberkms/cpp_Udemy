// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.

    std::deque<char> d1;

    for (auto &ele:s)
        if (std::isalpha(ele))
            d1.push_back(std::toupper(ele));

    char c1{};
    char c2{};

    while (d1.size() > 1) {
        c1 = d1.front();
        c2 = d1.back();
        d1.pop_front();
        d1.pop_back();
        if (c1 != c2)
            return false;
    }

    return true;
}

int main()
{
    std::vector<std::string> test_strings{"abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome", "afbcdea" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}