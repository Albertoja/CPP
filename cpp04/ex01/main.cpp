/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:37:58 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 18:17:48 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"

int	main(void)
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
//system("leaks brain");
return 0;
	// {
	// 	Dog	*dog = new Dog;

	// 	std::cout << std::endl;
	// 	dog->getBrain()->addIdeas("Eat");
	// 	dog->getBrain()->addIdeas("Drink");
	// 	dog->getBrain()->printIdeas();
	// 	Dog	*dog2 = new Dog(*dog);
	// 	delete dog;
	// 	dog2->getBrain()->printIdeas();
	// 	delete dog2;
	// 	system("leaks brain");
	// }
}
