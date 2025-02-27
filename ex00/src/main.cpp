/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:29 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 09:24:49 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main() {
	std::cout
		<< "================= ClapTrap ================="
		<< std::endl;
	ClapTrap a;
	a.displayClaptrap();
	ClapTrap b("Toto");
	b.displayClaptrap();
	b.attack("Another ClapTrap");
	b.beRepaired(5);
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.attack("Another ClapTrap");
	b.takeDamage(5);
	b.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	b.takeDamage(5);
	b.beRepaired(5);
	b.beRepaired(5);
	a.displayClaptrap();
	b.displayClaptrap();
	std::cout
		<< "==================== END ===================="
		<< std::endl;
	return 0;
}
