/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:02:24 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/08 13:15:57 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"scavtrap.hpp"

int main(void)
{
    ClapTrap sirenhead("sirenhead");
    ClapTrap househead("househead");
    ScavTrap megalodon("megalodon");
    sirenhead.attack("househead");
    househead.takeDamage(3);
    househead.beRepaired(2);
    
    househead.attack("sirenhead");
    sirenhead.takeDamage(5);

    sirenhead.beRepaired(10);
    sirenhead.attack("househead");
    househead.takeDamage(7);

    for (int i = 0; i < 100; i++)
    {
        sirenhead.attack("househead");
        househead.takeDamage(i);
    }
    sirenhead.attack("househead");
    sirenhead.beRepaired(10);
    
    megalodon.attack("sirenhead");
    megalodon.guardGate();
}
