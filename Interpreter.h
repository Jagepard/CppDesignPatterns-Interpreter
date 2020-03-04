#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <list>
#include "Album.h"
#include "InterpreterInterface.h"

class Interpreter : public InterpreterInterface
{
    private:
        std::list<Album> registry;
        bool isNumeric(std::string str);
        std::vector<std::string> explode(std::string const& parsedString, char delimiter);
        void getDataFromRegistry(std::vector<std::string> exploded, std::list<Album>::iterator it);
    public:
        virtual void interpret(std::string input) override;
        void addAlbumToRegistry(Album album);
};
