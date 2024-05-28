#include "yapt.h"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <yapt_id>" << std::endl;
        return 1;
    }

    std::string id(argv[1]);
    auto yapt = yapt::YaptFactory::createYapt(id);
    yapt->yapt();

    return 0;
}