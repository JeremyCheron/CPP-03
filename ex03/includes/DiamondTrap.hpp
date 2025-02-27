/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:13:48 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 11:27:30 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	// Constructors
	DiamondTrap();
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap(std::string name);

	// Deconstructors
	virtual ~DiamondTrap();

	// Overloaded Operators
	DiamondTrap &operator=(const DiamondTrap &src);

	// Public Methods
	void attack(const std::string &target);
	void whoAmI();
	void displayDiamondtrap(void);
	// Getter

	// Setter

};
