/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:51:38 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 13:06:02 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = _hitPointsConst;
	this->_energyPoints = _energyPointsConst;
	this->_attackDamage = _attackDamageConst;
	std::cout
		<< BLUE "ScavTrap "
		<< this->_name
		<< " created! (Default Constructor)" RESET
		<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout
		<< BLUE "ScavTrap Copy Constructor" RESET
		<< std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = _hitPointsConst;
	this->_energyPoints = _energyPointsConst;
	this->_attackDamage = _attackDamageConst;
	std::cout
		<< BLUE "ScavTrap "
		<< this->_name
		<< " created! (Named Constructor)" RESET
		<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout
	<< RED "Deconstructor for ScavTrap "
	<< this->_name
	<< RESET
	<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << BLUE "ScavTrap Assignation operator called" RESET << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << RED "ScavTrap " << _name << " cannot attack, not enough HP!" RESET << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << RED "ScavTrap " << _name << " has no energy left to attack!" RESET << std::endl;
		return;
	}
	std::cout << GREEN "ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage!" RESET << std::endl;
	_energyPoints--;
}

void	ScavTrap::guardGate()
{
  std::cout
  << YELLOW "ScavTrap "
  << this->_name
  << "'s Gate Keeper Mode ACTIVATED" RESET
  << std::endl;
}

void	ScavTrap::displayScavtrap(void)
{
	const int	totalWidth = 43;
	ClapTrap::printTitle(" ScavTrap ", 45);
	printCentered(this->_name, totalWidth);
	printCentered("HP: " + ClapTrap::toString(this->_hitPoints), totalWidth);
	printCentered("Energy: " + ClapTrap::toString(this->_energyPoints), totalWidth);
	printCentered("Attack Damage: " + ClapTrap::toString(this->_attackDamage), totalWidth);

	std::cout
		<< std::setw(45)
		<< std::setfill('-')
		<< ""
		<< std::setfill(' ')
		<< std::endl;
}

int ScavTrap::getEnergyPoints(void) const
{
	std::cout
		<< "ScavTrap Energy Points: "
		<< this->_energyPoints
		<< std::endl;
	return this->_energyPoints;
}
