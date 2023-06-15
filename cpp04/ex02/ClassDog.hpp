/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:12:45 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:55:52 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

#include "ClassAnimal.hpp"
#include "ClassBrain.hpp"

class Dog: public Animal
{
	public:

		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog	&operator=(const Dog &other);

		Brain	*getBrain(void) const;

		void	makeSound(void) const;

	private:

		Brain	*_brain;
};

#endif
