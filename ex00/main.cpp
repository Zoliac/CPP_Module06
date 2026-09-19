/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leny <leny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 13:03:42 by leny              #+#    #+#             */
/*   Updated: 2026/09/19 16:09:30 by leny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av) {
	if (ac != 2) {
		std::cout << "Use : ./Convert (value)" << std::endl;
		return 0;
	}
	else
		ScalarConverter::convert(av[1]);
	return 0;
}