/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:50:04 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/04 14:38:47 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombie_class = NULL;
	zombie_class->randomChump("Michel");
	Zombie new_zombie_class = *zombie_class->newZombie("Boby");
	new_zombie_class.announce();
	return (0);
}
