#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // unsigned int size = 1500;
    // Span bigSpan(size);

    // std::vector<int> numbers;
    // for (unsigned int i = 0; i < size; ++i) {
    //     numbers.push_back(i);
    // }
    
    // bigSpan.addNumber(numbers.begin(), numbers.end());
    // std::cout << bigSpan.shortestSpan() << std::endl;
    // std::cout << bigSpan.longestSpan() << std::endl;
 
    return 0;
}
