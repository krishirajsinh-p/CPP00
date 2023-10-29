/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:46:51 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/29 23:57:07 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void screenSwitch(void) {
	cout << "Please press Enter/Return key to proceed further." << flush;
	cin.ignore();
	getchar();
	clrscr();
}

int main(void) {
	string input;
	PhoneBook phonebook;

	displayHeader("WELCOME TO THE PHONEBOOK");
	
	while (true) {
		cout << "Enter one of the following commands: \n\nADD\nSEARCH\nEXIT\n\n>> " << flush;
		cin >> input;
		clrscr();

		if (strcasecmp(input.c_str(), "add") == 0) {
			phonebook.addContact();
		} else if (strcasecmp(input.c_str(), "search") == 0) {
			phonebook.searchContact();
		} else if (strcasecmp(input.c_str(), "exit") == 0) {
			break;
		} else {
			cout << "\nCommand not recognized, " << flush;
		}
		screenSwitch();
	}

	return 0;
}
