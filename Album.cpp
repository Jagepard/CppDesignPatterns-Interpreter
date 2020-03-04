/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "Album.h"

Album::Album(std::string author, std::string name)
{
    _author = author;
    _name = name;
}

std::string Album::getName()
{
    return _name;
}

std::string Album::getAuthor()
{
    return _author;
}
