#pragma once

#include <iostream>
#include <limits>

namespace mncrft
{
    class program
    {
    public:
        program() = default;
        program(program&) = delete;

        int run();
    };
}