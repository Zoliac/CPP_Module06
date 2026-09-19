/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leny <leny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 16:09:52 by leny              #+#    #+#             */
/*   Updated: 2026/09/19 19:14:04 by leny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <stdint.h>

typedef struct Data {
	std::string name;
} Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &src);
		Serializer	&operator=(const Serializer &src);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};