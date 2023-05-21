#include <iostream>
#include "set.h"

int main() {
    Set<int> intSet(5);

    std::cout << "Adding elements to the integer set..." << std::endl;
    intSet.Add(1);
    intSet.Add(2);
    intSet.Add(3);
    intSet.Add(2); // Trying to add a duplicate element
    intSet.Add(4);
    intSet.Add(5); // Trying to add an element when the set is full

    std::cout << "Is the integer set empty? " << (intSet.Is_Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is the integer set full? " << (intSet.Is_Full() ? "Yes" : "No") << std::endl;

    std::cout << "Getting elements from the integer set..." << std::endl;
    std::cout << "Get 3: " << intSet.Get(3) << std::endl;
    std::cout << "Get 6: " << intSet.Get(6) << std::endl;

    std::cout << "Is 2 in the integer set? " << (intSet.In_Set(2) ? "Yes" : "No") << std::endl;
    std::cout << "Is 4 in the integer set? " << (intSet.In_Set(4) ? "Yes" : "No") << std::endl;

    Set<std::string> stringSet(3);

    std::cout << "Adding elements to the string set..." << std::endl;
    stringSet.Add("apple");
    stringSet.Add("banana");
    stringSet.Add("cherry");

    std::cout << "Is the string set empty? " << (stringSet.Is_Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is the string set full? " << (stringSet.Is_Full() ? "Yes" : "No") << std::endl;

    std::cout << "Getting elements from the string set..." << std::endl;
    std::cout << "Get \"banana\": " << stringSet.Get("banana") << std::endl;
    std::cout << "Get \"orange\": " << stringSet.Get("orange") << std::endl;

    std::cout << "Is \"apple\" in the string set? " << (stringSet.In_Set("apple") ? "Yes" : "No") << std::endl;
    std::cout << "Is \"cherry\" in the string set? " << (stringSet.In_Set("cherry") ? "Yes" : "No") << std::endl;

    return 0;
}
