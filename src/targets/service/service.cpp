#include "yapt.h"


int main() {
    auto helloWorld = yapt::YaptFactory::createYapt(yapt::HelloWorldYapt::ID);
    helloWorld->yapt();

    auto goodbyeWorld = yapt::YaptFactory::createYapt(yapt::GoodbyeWorldYapt::ID);
    goodbyeWorld->yapt();

    return 0;
}