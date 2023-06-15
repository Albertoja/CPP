/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:37:58 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 18:16:40 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongAnimal.hpp"
#include "ClassWrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	//system("leaks polymorphism");
	return 0;
	
	// {
	// 	const	Animal* meta = new Animal();
	// 	const	Animal* i = new Cat();
	// 	const	Animal* j = new Dog();
		
	// 	std::cout << j->getType() << " -> Dog" << std::endl;
	// 	std::cout << i->getType() << " -> Cat" << std::endl;
	// 	i->makeSound();
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	delete meta;
	// 	delete i;
	// 	delete j;
	// }
	// std::cout << "----------------" << std::endl;
	// {
	// 	const	WrongAnimal* meta = new WrongAnimal();
	// 	const	WrongAnimal* wrong = new WrongCat();
		
	// 	std::cout << wrong->getType() << " -> WrongCat" << std::endl;
	// 	meta->makeSound();
	// 	wrong->makeSound();
	// 	delete meta;
	// 	delete wrong;
	// 	system("leaks polymorphism");
	// }
}
