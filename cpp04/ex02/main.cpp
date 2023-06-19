/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:37:58 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/19 16:25:53 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"

int	main(void)
{

	// Animal *animal1 = new Animal();
	// Animal animal2 = Animal();
	// delete animal1;
	{
		Dog	*dog = new Dog;

		std::cout << std::endl;
		dog->getBrain()->addIdeas("Eat");
		dog->getBrain()->addIdeas("Drink");
		dog->getBrain()->printIdeas();
		Dog	*dog2 = new Dog(*dog);
		delete dog;
		dog2->getBrain()->printIdeas();
		delete dog2;
		//system("leaks abstract");
	}

}
