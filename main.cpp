#include <iostream>
#include <list>
#include <iterator> 
#include <cstdlib>  

template<typename T>
void generic_print(const T& container, std::ostream& stream = std::cout) {
    for (auto itr = container.begin(); itr != container.end(); itr++) {
        stream << *itr << "\n";
    }
}

int main(int argc, char* argv[]) {

    std::list<int> intList;

    for (int i = 1; i < argc; ++i) {
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    generic_print(intList);

    return 0;
}
