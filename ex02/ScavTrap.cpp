/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:46:59 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 16:34:09 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "AnsiColors.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " created."<< RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " created."<< RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap " << _name << " destroyed." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << YELLOW << "ScavTrap " << _name << " copied." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << YELLOW << "ScavTrap " << _name << " assigned." << RESET << std::endl;
	}
	return *this;
}

void ScavTrap::attack(ScavTrap &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << RED << "ScavTrap " << _name << " attacks " << target._name
				  << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
		_energyPoints--;
		target.takeDamage(_attackDamage);
	}
	else
		std::cout << YELLOW << "ScavTrap " << _name << " cannot attack!" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	if (_hitPoints > 0)
		std::cout << YELLOW << "ScavTrap " << _name << " is now in Gate Keeper mode." << RESET << std::endl;
	else
		std::cout << YELLOW << "ScavTrap " << _name << " cannot guard gate, it is out of hit points!" << RESET << std::endl;
}
