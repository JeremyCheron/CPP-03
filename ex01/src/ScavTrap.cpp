#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " created! (Default Constructor)" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstructor for ScavTrap " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

void	ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_energyPoints == 0)
        std::cout
            << "\033[31mScavTrap "
            << this->_name
            << " is not able to attack "
            << target
            << ", because he has no energy points left.\033[0m"
            << std::endl;
    else
        std::cout << "\033[31mScavTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}

void	ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " guards!" << std::endl;
}
