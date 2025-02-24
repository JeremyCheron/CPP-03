/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:29 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 09:13:45 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main() {
	std::cout
		<< "CL4PTR4P TEST"
		<< std::endl;
	std::cout
		<< "============ ClapTrap ============"
		<< std::endl;
	ClapTrap a;
	ClapTrap b("Toto");
	b.attack("Another ClapTrap");
	b.takeDamage(5);
	b.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	b.takeDamage(5);
	b.beRepaired(5);
	b.beRepaired(5);
	std::cout
		<< "============ ScavTrap ============"
		<< std::endl;
	ScavTrap c;
	c.attack("Another ScavTrap");
	c.guardGate();
	std::cout
		<< "============ FragTrap ============"
		<< std::endl;
	FragTrap d;
	d.attack("Another FragTrap");
	d.highFivesGuys();
	std::cout
		<< "============ END ============"
		<< std::endl;
	return 0;
}
