#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:

    ScavTrap();

public:

    ScavTrap( std::string name );
    ~ScavTrap();

    void gate_keeper( void );
    void attack( const std::string& target );

};

#endif