/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:07:55 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/09 16:21:06 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
// #include "ScavTrap.hpp"

int main() {
	// ClapTrap claptrap1("ClapTrap1");
	// ClapTrap claptrap2("ClapTrap2");
	// ScavTrap scavtrap1("ScavTrap1");
	// ScavTrap scavtrap2("ScavTrap2");
	//
	// claptrap1.attack(claptrap2.getName());
	// claptrap2.takeDamage(claptrap1.getAttackDamage());
	//
	// claptrap2.beRepaired(5);
	// claptrap1.attack(claptrap2.getName());
	//
	// scavtrap2.guardGate();
	// scavtrap1.attack(scavtrap2);
	// scavtrap1.attack(scavtrap2);
	// scavtrap1.attack(scavtrap2);
	// scavtrap1.attack(scavtrap2);
	// scavtrap2.beRepaired(10);
	// scavtrap1.attack(scavtrap2);
	// scavtrap1.attack(scavtrap2);
	// scavtrap1.attack(scavtrap2);
	// scavtrap2.guardGate();
	// scavtrap2.beRepaired(10);

	FragTrap fragtrap1("FragTrap1");
	FragTrap fragtrap2("FragTrap2");

	fragtrap1.attack(fragtrap2.getName());
	fragtrap1.highFivesGuys();
	fragtrap2.takeDamage(fragtrap1.getAttackDamage());
	fragtrap2.beRepaired(5);

	return 0;
}
