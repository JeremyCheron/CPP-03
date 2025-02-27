/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:29 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 09:56:00 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main() {
	std::cout
		<< "================= ClapTrap ================="
		<< std::endl;
	ClapTrap a;
	ClapTrap b("Toto");
	a.displayClaptrap();
	b.displayClaptrap();
	b.attack("Another ClapTrap");
	a.takeDamage(5);
	b.attack("Another ClapTrap");
	a.takeDamage(5);
	b.attack("Another ClapTrap");
	a.beRepaired(5);
	a.beRepaired(5);
	std::cout
		<< "================= ScavTrap ================="
		<< std::endl;
	ScavTrap c("Scavenger");
	c.displayScavtrap();
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.attack("Another ScavTrap");
	c.guardGate();
	a.displayClaptrap();
	b.displayClaptrap();
	c.displayScavtrap();
	std::cout
		<< "==================== END ===================="
		<< std::endl;
	return 0;
}
