/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:38:40 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/19 11:43:53 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

	class DiamondTrap : public FragTrap, public ScavTrap {
		;
	};

#endif
