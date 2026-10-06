/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:18:19 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 15:28:29 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fragtrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap " << this->name << " has been born!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " is destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    if (this->hitPoints == 0)
    {
        std::cout << "FragTrap " << this->name << " is dead and cannot request a high five!" << std::endl;
        return;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << "FragTrap " << this->name << " has no energy to request a high five!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " is requesting a high five!" << std::endl;
    this->energyPoints--;
}




