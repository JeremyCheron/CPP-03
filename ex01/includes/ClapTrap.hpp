/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:23 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/14 13:36:37 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		explicit ClapTrap(const std::string& name);
		ClapTrap(ClapTrap const &src);
		virtual ~ClapTrap();

		ClapTrap &operator=(ClapTrap const &src);

		void	attack(const std::string &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);


	protected:
		std::string	_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;
};
