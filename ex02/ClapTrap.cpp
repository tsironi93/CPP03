/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:55:29 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 15:04:24 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "ClapTrap default constructor called" << std::endl;
	}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "ClapTrap parameterized constructor called for " << _name << std::endl;
	}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _hitPoints(other._hitPoints), 
	  _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
		  std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
	  }

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap assignment operator called for " << _name <<std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

const std::string &ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount
				  << " points of damage! Remaining hit points: " <<_hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs itself for " 
				  << amount << " hit points! Current hit points: " << _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot be repaired!" << std::endl;
}

