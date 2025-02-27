/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:29 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 12:54:51 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main() {
	std::cout
		<< "================= ClapTrap ================="
		<< std::endl;
	ClapTrap a;
	a.displayClaptrap();
	ClapTrap b("Toto");
	b.displayClaptrap();
	b.attack("Another ClapTrap");
	b.takeDamage(5);
	b.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	b.takeDamage(5);
	b.beRepaired(5);
	b.beRepaired(5);
	std::cout
		<< "================= ScavTrap ================="
		<< std::endl;
	ScavTrap c;
	c.displayScavtrap();
	c.attack("Another ScavTrap");
	c.guardGate();
	std::cout
		<< "================= FragTrap ================="
		<< std::endl;
	FragTrap d("Fragger");
	d.displayFragtrap();
	d.attack("Another FragTrap");
	d.highFivesGuys();
	std::cout
		<< "=============== DiamondTrap ================"
		<< std::endl;
	DiamondTrap e("Diamond");
	e.displayDiamondtrap();
	e.attack("Another DiamondTrap");
	e.highFivesGuys();
	e.guardGate();
	e.whoAmI();

	std::cout
		<< "==================== END ===================="
		<< std::endl;
	return 0;
}
