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
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
};

#endif