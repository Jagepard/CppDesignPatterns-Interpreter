#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>

class InterpreterInterface
{
    public:
        virtual void interpret(std::string input) = 0;
};
