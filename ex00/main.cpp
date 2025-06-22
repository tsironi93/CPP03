/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:07:55 by itsiros           #+#    #+#             */
/*   Updated: 2025/06/03 12:09:48 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap1("ClapTrap1");
	ClapTrap claptrap2("ClapTrap2");

	claptrap1.attack(claptrap2.getName());
	claptrap2.takeDamage(claptrap1.getAttackDamage());

	claptrap2.beRepaired(5);
	claptrap1.attack(claptrap2.getName());

	return 0;
}
