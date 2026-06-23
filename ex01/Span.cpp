#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _maxsize(n) {}

Span::Span(const Span &other) : _maxsize(other._maxsize), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _maxsize = other._maxsize;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_numbers.size() >= _maxsize) {
        throw std::runtime_error("Span is full");
    }
    _numbers.push_back(number);
}

unsigned int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers in span");

        int minSpan = *std::min_element(_numbers.begin(), _numbers.end());
        int maxSpan = *std::max_element(_numbers.begin(), _numbers.end());
        return static_cast<unsigned int>(maxSpan - minSpan);
    }
}