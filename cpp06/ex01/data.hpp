/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:31:36 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 17:40:15 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
	int	num;
};

Data *deserialize(uintptr_t temp);
uintptr_t serialize(Data *ptr);
#endif
