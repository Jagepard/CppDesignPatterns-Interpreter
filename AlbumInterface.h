#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>

class AlbumInterface
{
    public:
        virtual std::string getName() = 0;
        virtual std::string getAuthor() = 0;
};
