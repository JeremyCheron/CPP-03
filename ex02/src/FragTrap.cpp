/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:04:03 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 09:11:46 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created! (Default Constructor)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created! (Parametric Constructor)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor for FragTrap " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
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
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout
			<< "\033[31mFragTrap "
			<< this->_name
			<< " is not able to attack "
			<< target
			<< ", because he has no energy points left.\033[0m"
			<< std::endl;
	else
		std::cout << "\033[31mFragTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to high five!" << std::endl;
}
