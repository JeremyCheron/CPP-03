/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:04:57 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 09:04:58 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

private:
    bool _guarding_gate;
public:
    // Constructors
    ScavTrap();
    ScavTrap(const ScavTrap &copy);
    explicit ScavTrap(std::string name);

    // Deconstructors
    virtual ~ScavTrap();

    // Overloaded Operators
    ScavTrap &operator=(const ScavTrap &src);

    // Public Methods
    void attack(const std::string &target);
    void guardGate();
    // Getter

    // Setter

};
