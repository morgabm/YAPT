#include "yapt.h"

#include <iostream>
#include <string>
#include <memory>

const std::string yapt::HelloWorldYapt::ID = "hello_world";
void yapt::HelloWorldYapt::yapt() {
    std::cout << "Hello, World!" << std::endl;
}

const std::string yapt::GoodbyeWorldYapt::ID = "goodbye_world";
void yapt::GoodbyeWorldYapt::yapt() {
    std::cout << "Goodbye, World!" << std::endl;
}

std::unique_ptr<yapt::Yapt> yapt::YaptFactory::createYapt(const std::string& id) {
    if (id == HelloWorldYapt::ID) {
        return std::make_unique<HelloWorldYapt>();
    } else if (id == GoodbyeWorldYapt::ID) {
        return std::make_unique<GoodbyeWorldYapt>();
    } else {
        return nullptr;
    }
}