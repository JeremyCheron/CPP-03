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

#include "ClapTrap.hpp"

int main(void) {
	std::cout
		<< "CL4PTR4P TEST"
		<< std::endl;
	ClapTrap a;
	ClapTrap b("Toto");
	a.attack("Another ClapTrap");
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
}
