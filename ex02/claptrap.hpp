/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:59:33 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 15:51:42 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>
#include <algorithm>

class ClapTrap
{
    protected:
       std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap(); 

        ClapTrap &operator=(const ClapTrap &src);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);  
};

#endif