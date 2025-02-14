#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    bool _guarding_gate;
public:
    // Constructors
    ScavTrap();
    ScavTrap(const ScavTrap &copy);
    explicit ScavTrap(std::string name);

    // Deconstructors
    virtual ~ScavTrap();

    // Overloaded Operators
    ScavTrap &operator=(const ScavTrap &src);

    // Public Methods
    void attack(const std::string &target);
    void guardGate();
    // Getter

    // Setter

};