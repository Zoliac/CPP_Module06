/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leny <leny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 19:01:38 by leny              #+#    #+#             */
/*   Updated: 2026/09/19 19:13:04 by leny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void) {
	Data data = {"Hello, World!"};
	std::cout << "Original Data pointer: " << &data << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized value: " << raw << std::endl;
	Data* deserializedData = Serializer::deserialize(raw);
	std::cout << "Deserialized Data pointer: " << deserializedData << std::endl;
	if (deserializedData == &data) {
		std::cout << "Serialization and deserialization successful!" << std::endl;
		std::cout << "Data text: " << deserializedData->name << std::endl;
	} else {
		std::cout << "Error: pointers do not match!" << std::endl;
	}
	return 0;
}