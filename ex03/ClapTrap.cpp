/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 12:27:36 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/06 15:41:56 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name)
{
    std::cout << "ClapTrap Parameterized constructor is called" << std::endl;
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy constructor is called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap assignment operator is called" << std::endl;
    if (this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points!" << std::endl;
        return;
    }
    else if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage" << std::endl;
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points!" << std::endl;
        return;
    }
    else if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
    hitPoints += amount;

    energyPoints--;
}
