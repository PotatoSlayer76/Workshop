#include <iostream>
#include <list>
#include <iterator> 
#include <cstdlib>  

int main(int argc, char* argv[]) {

    std::list<int> intList;

    for (int i = 1; i < argc; ++i) {
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    std::list<int>::iterator it = intList.begin();
    while (it != intList.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    return 0;
}
