/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:01:57 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/24 21:34:35 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::endl;
using std::string;

string toupper_string(string str) {
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	} else {
		for (size_t i = 1; argv[i] != NULL; i++)
			cout << toupper_string(argv[i]);
		cout << endl;
	}
	return (0);
}
