/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:41:56 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/06 15:41:56 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "diamondtrap.hpp"

int main(void)
{
    ClapTrap clap("clappy");
    ScavTrap scav("scavvy");
    FragTrap frag("fraggy");
    DiamondTrap diamond("diamondy");

    diamond.whoAmI();
    diamond.attack("clappy");
    clap.takeDamage(30);

    diamond.guardGate();
    diamond.highFivesGuys();

    scav.attack("diamondy");
    frag.attack("diamondy");

    DiamondTrap copy(diamond);
    copy.whoAmI();

    return 0;
}
