/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:27 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 09:30:56 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< GREEN "ClapTrap "
		<< this->_name
		<< " is born! (Default Construtor)" RESET
		<< std::endl;
}

ClapTrap::ClapTrap(const std::string& name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< GREEN "ClapTrap "
		<< _name
		<<" is born! (Named Constructor)" RESET
		<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout
		<< GREEN "ClapTrap Copy Constructor" RESET
		<< std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< _name
		<< RED " Died! (Deconstructor Called)" RESET
		<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout
		<< GREEN "ClapTrap Assignation operator called" RESET
		<< std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout
			<< RED "ClapTrap "
			<< this->_name
			<< " can't attack! (Energy to low)" RESET
			<< std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout
			<< GREEN "ClapTrap "
			<< this->_name
			<< " attacks "
			<< target
			<< RESET
			<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else if (this->_hitPoints > 0)
		this->_hitPoints = 0;
	else
	{
		std::cout
			<< RED "ClapTrap "
			<< this->_name
			<< " is already dead!" RESET
			<< std::endl;
		return;
	}
	std::cout
		<< RED "ClapTrap "
		<< this->_name
		<< " took "
		<< amount
		<< "damage!";
	if (this->_hitPoints == 0)
		std::cout
			<< " He's dead!" RESET
			<< std::endl;
	else
		std::cout
			<< this->_hitPoints
			<< " Hit Points left, be careful !" RESET
			<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0)
	{
		std::cout
			<< RED "ClapTrap "
			<< this->_name
			<< " can't repair! (energy to low)" RESET
			<< std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout
			<< YELLOW "ClapTrap "
			<< this->_name
			<< " has repaired "
			<< amount
			<< " Hit Points! New Total = "
			<< this->_hitPoints
			<< RESET
			<< std::endl;
	}
}

void	ClapTrap::printCentered(std::string text, int width)
{
	int	textLength = text.length();
	int	padding = (width - textLength) / 2;
	std::cout
		<< "|"
		<< std::setw(padding) << " "
		<< text
		<< std::setw(width - textLength - padding) << " "
		<< "|"
		<< std::endl;
}

std::string toString(unsigned int value)
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

void printTitle(const std::string className, int totalWidth)
{
	int	classPadding = (totalWidth - className.length()) / 2;

	std::cout
		<< std::setfill('-')
		<< std::setw(classPadding) << ""
		<< className
		<< std::setw(totalWidth - classPadding - className.length()) << ""\
		<< std::setfill(' ')
		<< std::endl;
}

void	ClapTrap::displayClaptrap(void)
{
	const int	totalWidth = 43;
	printTitle(" ClapTrap ", 45);
	printCentered(this->_name, totalWidth);
	printCentered("HP: " + toString(this->_hitPoints), totalWidth);
	printCentered("Energy: " + toString(this->_energyPoints), totalWidth);
	printCentered("Attack Damage: " + toString(this->_attackDamage), totalWidth);

	std::cout
		<< std::setw(45)
		<< std::setfill('-')
		<< ""
		<< std::setfill(' ')
		<< std::endl;
}
