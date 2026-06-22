#include "easyfind.hpp"
#include <list>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);

    std::list<int> lis = {10, 20, 30, 40, 50};
    lis.push_back(60);

    std::deque<int> deq = {100, 200, 300, 400, 500};
    deq.push_back(600);

    std::cout << "Vector: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Deque: ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "List: ";
    for (std::list<int>::iterator it = lis.begin(); it != lis.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Value found for vector: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lis, 160);
        std::cout << "Value found for list: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::deque<int>::iterator it = easyfind(deq, 300);
        std::cout << "Value found for deque: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}