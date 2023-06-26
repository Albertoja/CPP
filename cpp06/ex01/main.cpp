/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:30:37 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 17:43:55 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int	main(void)
{
	Data		*dat;
	uintptr_t	temp;

	dat = new Data;
	dat->num = 8;
	std::cout << "Starting num: " << dat->num << std::endl;
	temp = serialize(dat);
	delete dat;
	dat = deserialize(temp);
	std::cout << "Ending num: " << dat->num << std::endl;
	return (0);
}
