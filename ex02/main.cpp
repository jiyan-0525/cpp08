#include "MutantStack.hpp"

int main () {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(20);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(37);
    mstack.push(0);
    std::cout << "interating forward: " << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for (; it != ite; ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "interwating reverse: " << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    for (; rit != rite; ++rit) {
        std::cout << *rit << std::endl;
    }

    MutantStack<int> copy(mstack);
    std::cout << "Copying stack: " << std::endl;
    MutantStack<int>::iterator cit = copy.begin();
    MutantStack<int>::iterator cite = copy.end();
    for (; cit != cite; ++cit) {
        std::cout << *cit << std::endl;
    }
}