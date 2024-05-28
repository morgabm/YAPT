#pragma once

#include <string>
#include <memory>

namespace yapt {

    class Yapt {
    public:
        static std::string ID;
        virtual void yapt() = 0;
    };


    class HelloWorldYapt final : public Yapt {
    public:
        const static std::string ID;
        void yapt() override;
    };


    class GoodbyeWorldYapt final : public Yapt {
    public:
        const static std::string ID;
        void yapt() override;
    };


    class YaptFactory {
    public:
        static std::unique_ptr<Yapt> createYapt(const std::string& id);
    };

}