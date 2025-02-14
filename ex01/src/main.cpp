/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:29 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/14 13:34:16 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main() {
	std::cout
		<< "CL4PTR4P TEST"
		<< std::endl;
	ClapTrap a;
	ClapTrap b("Toto");
	b.attack("Another ClapTrap");
	b.takeDamage(5);
	b.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	b.takeDamage(5);
	ScavTrap c;
	c.attack("Another ScavTrap");
	c.guardGate();
}
