#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "AlbumInterface.h"

class Album : public AlbumInterface
{
    private:
        std::string _author;
        std::string _name;

    public:
        virtual std::string getName() override;
        virtual std::string getAuthor() override;
        Album(std::string author, std::string name);
};
