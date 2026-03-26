#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:
        Zombie();

    private:
    	std::string name;
        void announce( void );


};

#endif