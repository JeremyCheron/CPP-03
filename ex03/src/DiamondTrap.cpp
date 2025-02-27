/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:11:18 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 13:07:43 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = FragTrap::_hitPointsConst;
	this->_energyPoints = ScavTrap::_energyPointsConst;
	this->_attackDamage = FragTrap::_attackDamageConst;
	this->ClapTrap::_name = this->_name + "_clap_name";
	std::cout
		<< CYAN "DiamondTrap "
		<< this->_name
		<< " created! (Default Constructor)" RESET
		<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):
	ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout
		<< CYAN "DiamondTrap Copy Constructor" RESET
		<< std::endl;
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPointsConst;
	this->_energyPoints = ScavTrap::_energyPointsConst;
	this->_attackDamage = FragTrap::_attackDamageConst;
	std::cout
		<< CYAN "DiamondTrap "
		<< this->_name
		<< " created! (Named Constructor)" RESET
		<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout
	<< RED "Deconstructor for DiamondTrap "
	<< this->_name
	<< RESET
	<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << CYAN "DiamondTrap Assignation operator called" RESET << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout
			<< GREEN "DiamondTrap "
			<< this->_name
			<< " attacks "
			<< target
			<< " causing "
			<< this->_attackDamage
			<< " points of damage!" RESET
			<< std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout
			<< RED "DiamondTrap "
			<< this->_name
			<< " can't attack! (energy to low)" RESET
			<< std::endl;
	}
}

void DiamondTrap::whoAmI()
{
	std::cout
		<< CYAN "DiamondTrap "
		<< this->_name
		<< " is a DiamondTrap and his ClapTrap name is "
		<< this->ClapTrap::_name
		<< RESET
		<< std::endl;
}

void DiamondTrap::displayDiamondtrap(void)
{
	const int	totalWidth = 43;
	this->printTitle(" DiamondTrap ", 45);
	this->printCentered("Name: " + this->_name, totalWidth);
	this->printCentered("CP Name: " + this->ClapTrap::_name, totalWidth);
	this->printCentered("Hit Points: " + this->toString(this->_hitPoints), totalWidth);
	this->printCentered("Energy Points: " + this->toString(this->_energyPoints), totalWidth);
	this->printCentered("Attack Damage: " + this->toString(this->_attackDamage), totalWidth);
	std::cout
		<< std::setw(45)
		<< std::setfill('-')
		<< ""
		<< std::setfill(' ')
		<< std::endl;
}


