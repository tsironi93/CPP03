/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:19:19 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 14:48:53 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(const std::string &name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &other);
		FragTrap (const FragTrap &other);

		void highFivesGuys();
};

#endif
