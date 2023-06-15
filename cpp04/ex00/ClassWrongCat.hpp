/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:12:45 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:28 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWRONGCAT_HPP
# define CLASSWRONGCAT_HPP

#include "ClassWrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(const WrongCat &other);
		~WrongCat(void);

		WrongCat	&operator=(const WrongCat &other);

		void	makeSound(void) const;
};

#endif
