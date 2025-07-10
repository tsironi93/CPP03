/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:00:44 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 14:44:51 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &other);
		DiamondTrap(const DiamondTrap &other);

		void attack(ScavTrap &target);
		void whoAmI() const;
};



#endif // DIAMONDTRAP_HPP
