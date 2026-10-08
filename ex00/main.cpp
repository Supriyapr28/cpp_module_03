/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:02:24 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/08 13:35:11 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"claptrap.hpp"

int main(void)
{
    std::cout <<"---test case-1---"<< std::endl;
    ClapTrap sirenhead("sirenhead");
    ClapTrap househead("househead");
    sirenhead.attack("househead");
    househead.takeDamage(3);
    househead.beRepaired(2);
    
    std::cout <<"---test case-2---"<< std::endl;
    househead.attack("sirenhead");
    sirenhead.takeDamage(5);

    std::cout <<"---test case-3---"<< std::endl;
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
