/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:27 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/14 13:37:05 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10)
{
	std::cout
		<< "ClapTrap "
		<< this->_name
		<< " is born! (Default Construtor)"
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10)
{
	std::cout
		<< "ClapTrap"
		<< _name
		<<" is born! (Named Constructor)"
		<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout
		<< "ClapTrap Copy Constructor"
		<< std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< _name
		<< " Died! (Deconstructor Called)"
		<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints <= 0 && this->_hitPoints <= 0)
	{
		std::cout
			<< "ClapTrap "
			<< this->_name
			<< " can't attack !";
	}
	else
	{
		std::cout
			<< "ClapTrap "
			<< this->_name
			<< " attacks "
			<< target
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
			<< "ClapTrap "
			<< this->_name
			<< " is already dead!"
			<< std::endl;
		return;
	}
	std::cout
		<< "ClapTrap "
		<< this->_name
		<< " took "
		<< amount
		<< "damage! "
		<< this->_hitPoints
		<< " Hit Points left, be careful !"
		<<std::endl;
}
void	beRepaired(unsigned int amount);
