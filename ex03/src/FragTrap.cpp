/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:04:03 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 11:53:52 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout
	<< MAGENTA "FragTrap "
	<< this->_name
	<< " created! (Default Constructor)" RESET
	<< std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout
		<< MAGENTA "FragTrap Copy Constructor" RESET
		<< std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout
		<< MAGENTA "FragTrap "
		<< this->_name
		<< " created! (Parametric Constructor)" RESET
		<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout
	<< RED "Deconstructor for FragTrap "
	<< this->_name
	<< RESET
	<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout
		<< MAGENTA "FragTrap Assignation operator called" RESET
		<< std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout
			<< GREEN "FragTrap "
			<< this->_name <<
			" attacks "
			<< target
			<< ", causing "
			<< this->_attackDamage
			<< " points of damage!" RESET
			<< std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout
			<< RED "FragTrap "
			<< this->_name
			<< " is not able to attack "
			<< target
			<< ", because he has no energy points left." RESET
			<< std::endl;
	else
		std::cout
			<< RED "FragTrap "
			<< this->_name
			<< " is not able to attack "
			<< target
			<< ", because he has not enough hit points." RESET
			<< std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout
		<< CYAN "FragTrap "
		<< this->_name
		<< " wants to high five!" RESET
		<< std::endl;
}

void	FragTrap::displayFragtrap(void)
{
	const int	totalWidth = 43;
	printTitle(" FragTrap ", 45);
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
