/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:00:49 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 14:52:33 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "AnsiColors.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << CYAN << "DiamondTrap default created." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << CYAN << "DiamondTrap " << this->_name << " created." << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << CYAN << "DiamondTrap " << this->_name << " destroyed." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << CYAN << "DiamondTrap " << this->_name << " copied." << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << CYAN << "DiamondTrap " << this->_name << " assigned." << RESET << std::endl;
	}
	return *this;
}

void DiamondTrap::attack(ScavTrap &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout << CYAN << "I am DiamondTrap " << this->_name << " and my ClapTrap name is "
			  << ClapTrap::_name << "." << RESET << std::endl;
}
