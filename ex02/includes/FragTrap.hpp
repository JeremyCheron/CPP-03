/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:04:51 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 10:53:21 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

private:

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

	// Setter

};
