/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:53:36 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 16:53:37 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include <cfloat>

bool	checkchar(std::string str);
bool	checkint(std::string str);
bool	checkfloat(std::string str);
bool	checkdouble(std::string str);
void	charconversion(char c);
void	intconversion(std::string str);
void	floatconversion(std::string str);
void	doubleconversion(std::string str);

#endif
