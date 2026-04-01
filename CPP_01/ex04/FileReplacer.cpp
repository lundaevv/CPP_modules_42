#include "FileReplacer.hpp"
#include <fstream>
#include <iostream>

FileReplacer::FileReplacer(const std::string &filename,
                           const std::string &search,
                           const std::string &replace)
    : _filename(filename), _search(search), _replace(replace) {}

bool FileReplacer::readFile(std::string &content) const
{
    std::ifstream input(_filename);
    std::string line;

    if (!input)
    {
        std::cerr << "Error: could not open file " << _filename << std::endl;
        return false;
    }

    content.clear();
    while (std::getline(input, line))
    {
        content += line;
        if (!input.eof())
            content += "\n";
    }
    return true;
}

std::string FileReplacer::replaceAll(const std::string &text) const
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = text.find(_search, pos)) != std::string::npos) // find() returns npos if finds nothing
    {
        result += text.substr(pos, found - pos); // substr(start, length)
        result += _replace;
        pos = found + _search.length();
    }
    result += text.substr(pos);
    return result;
}

bool FileReplacer::writeFile(const std::string &content) const
{
    std::ofstream output(_filename + ".replace");

    if (!output)
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return false;
    }

    output << content;
    return true;
}

bool FileReplacer::process() const
{
    std::string content;

    if (_search.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return false;
    }

    if (!readFile(content))
        return false;

    content = replaceAll(content);

    if (!writeFile(content))
        return false;

    return true;
}