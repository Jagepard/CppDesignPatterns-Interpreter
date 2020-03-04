/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <utility>
#include "Interpreter.h"

int main()
{
    Interpreter interpreter;

    interpreter.addAlbumToRegistry(Album("Korn", "Untouchables"));
    interpreter.addAlbumToRegistry(Album("Deftones", "Adrenaline"));

    interpreter.interpret("album 2");
    interpreter.interpret("album author 2");
    interpreter.interpret("album author 1");
    interpreter.interpret("author 1");
}

void Interpreter::interpret(std::string input)
{
    auto exploded = explode(input, ' ');

    for (const auto& str : exploded)
    {
        if (isNumeric(str))
        {
            int number = std::stoi(str);
            std::list<Album>::iterator it = this->registry.begin();
            std::advance(it, number - 1);
            this->getDataFromRegistry(exploded, it);
        }
    }
}

void Interpreter::addAlbumToRegistry(Album album)
{
    this->registry.push_back(album);
}

void Interpreter::getDataFromRegistry(std::vector<std::string> exploded, std::list<Album>::iterator it)
{
    for (const auto& str : exploded)
    {
        if (str == "album") {
            std::cout << it->getName() << " ";
        }

        if (str == "author") {
            std::cout << it->getAuthor() << " ";
        }
    }

    std::cout << std::endl;
};

std::vector<std::string> Interpreter::explode(std::string const& parsedString, char delimiter)
{
    std::vector<std::string> result;
    std::istringstream iss(parsedString);

    for (std::string token; std::getline(iss, token, delimiter); )
    {
        result.push_back(std::move(token));
    }

    return result;
}

bool Interpreter::isNumeric(std::string str) {
    for (int i = 0; i < str.length(); i++)
    {
        return isdigit(str[i]);
    }
}
