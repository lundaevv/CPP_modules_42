#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType() const;
    void setType(const std::string &new_value);

private:
    std::string _type;
};

#endif