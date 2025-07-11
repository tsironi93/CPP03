/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:41:41 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 16:31:09 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &other);
		ScavTrap (const ScavTrap &other);

		void attack(ScavTrap &target);
		void guardGate();
};

#endif
