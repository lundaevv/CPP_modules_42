#pragma once

#include <string>

class FileReplacer
{
private:
    std::string _filename;
    std::string _search;
    std::string _replace;

    bool readFile(std::string &content) const;
    std::string replaceAll(const std::string &text) const;
    bool writeFile(const std::string &content) const;

public:
    FileReplacer(const std::string &filename,
                 const std::string &search,
                 const std::string &replace);
    bool process() const;
};