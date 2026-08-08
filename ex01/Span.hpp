#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <limits>
#include <exception>
#include <algorithm>

class Span {

private:
    unsigned int _maxsize;
    std::vector<int> _numbers;

public:
    template <typename T>
    void addRange(T first, T last);

    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    
    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
};

template <typename T>
void Span::addRange(T first, T last) {
    if (_numbers.size() + std::distance(first, last) > _maxsize) {
        throw std::runtime_error("Adding this range would exceed the maximum size of the span");
}
    _numbers.insert(_numbers.end(), first, last);
}

#endif