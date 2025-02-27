/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:04:51 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 13:05:11 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

private:

protected:
	const static int _hitPointsConst = 100;
	const static int _energyPointsConst = 100;
	const static int _attackDamageConst = 30;

public:
	// Constructors
	FragTrap();
	FragTrap(const FragTrap &copy);
	explicit FragTrap(std::string name);

	// Deconstructors
	virtual ~FragTrap();

	// Overloaded Operators
	FragTrap &operator=(const FragTrap &src);

	// Public Methods
	void attack(const std::string &target);
	void displayFragtrap(void);
	void highFivesGuys(void);
	// Getter
	int	getHitPoints(void) const;
	int getAttackDamage(void) const;
	// Setter

};
