#include "easyfind.hpp"
#include <list>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    // vec.push_front(0); // std::vector does not have push_front method
    // vec.at(5) = 6; // Set the seventh element to 6

    std::list<int> lis = {10, 20, 30, 40, 50};
    lis.push_back(60);
    lis.push_front(0);
    // lis.pop_back();
    // lis.pop_front();

    std::deque<int> deq = {100, 200, 300, 400, 500};
    deq.push_back(600);
    // deq.push_front(0);
    // deq.pop_back();
    // deq.pop_front();
    deq.at(4) = 600; // Set the seventh element to 600

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
<<<<<<< HEAD
        std::vector<int>::iterator it = easyfind(vec, 7);
=======
        std::vector<int>::iterator it = easyfind(vec, 3);
>>>>>>> github/main
        std::cout << "Value found for vector: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lis, 50);
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