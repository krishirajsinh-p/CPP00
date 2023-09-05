/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:01:57 by kpuwar            #+#    #+#             */
/*   Updated: 2023/09/05 18:13:15 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (unsigned short i = 1; argv[i]; i++) {
			for (unsigned short j = 0; j < strlen(argv[i]); j++) {
				std::cout << (char) std::toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;		
	}
	return 0;
}