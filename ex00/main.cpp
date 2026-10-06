/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:02:24 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 14:40:01 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"claptrap.hpp"

int main(void)
{
    ClapTrap sirenhead("sirenhead");
    ClapTrap househead("househead");
    sirenhead.attack("househead");
    househead.takeDamage(3);
    househead.beRepaired(2);
    
    househead.attack("sirenhead");
    sirenhead.takeDamage(5);

    sirenhead.beRepaired(10);
    sirenhead.attack("househead");
    househead.takeDamage(7);

    for (int i = 0; i < 11; i++)
    {
        sirenhead.attack("househead");
        househead.takeDamage(1);
    }
    sirenhead.attack("househead");
}
