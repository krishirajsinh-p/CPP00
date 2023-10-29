/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:01:14 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 00:14:10 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void displayHeader(string header) {
	cout << "==================================================================" << endl << flush;
	for (unsigned short j = 0; j < (67 - header.length()) / 2; j++)
		cout << " " << flush;
	cout << header << endl << flush;
	cout << "==================================================================" << endl << endl << flush;
}

PhoneBook::PhoneBook() {
	index = -1;
}

string input(string message) {
	string input;

	while (true) {
		cout << message << flush;
		std::getline(cin, input);

		if (input.empty() == false) {
			break;
		} else {
			cout << "Invalid Input, Please press Enter/Return key to try again." << flush;
			getchar();
		}
	}
	return input;
}

void PhoneBook::addContact(void) {
	index++;
	index %= 8;

	displayHeader("ADDING CONTACT TO THE PHONEBOOK");

	cin.ignore();
	contacts[index].setFirstName(input("Enter First Name >> "));
	contacts[index].setLastName(input("Enter Last Name >> "));
	contacts[index].setNickName(input("Enter Nick Name >> "));
	contacts[index].setPhoneNumber(input("Enter Phone Number >> "));
	contacts[index].setDarkestSecret(input("Enter Darkest Secret >> "));
	contacts[index].initializeObject();

	cout << endl << "The contact has been added to phonebook successfully! " << flush;
	cin.putback('\n');
}

void inColumnForm(string attribute[]) {
	for (short i = 0; i < 4; i++) {
		cout << "|" << flush;
		if (attribute[i].length() > 10) {
			for (short j = 0; j < 9; j++)
				cout << attribute[i][j] << flush;
			cout << "." << flush;
		} else {
			for (unsigned short j = 0; j < 10 - attribute[i].length(); j++)
				cout << " " << flush;
			cout << attribute[i] << flush;
		}
	}
	cout << "|" << endl << flush;
}

void PhoneBook::searchContact(void) {
	int input = -1;

	while (true) {
		displayHeader("ADDING CONTACT TO THE PHONEBOOK");

		if (index == -1) {
			cout << "PhoneBook is empty at the moment. " << flush;
			return;
		}

		inColumnForm((string[]) {"Index", "First Name", "Last Name", "Nickame"});
		for (unsigned short i = 0; i < MAX_CONTACTS; i++) {
			if (contacts[i].isObjectInitialized())
				inColumnForm((string[]) {std::to_string(i + 1), contacts[i].getFirstName(), contacts[i].getLastName(), contacts[i].getNickName()});
		}		

		cout << endl << "Enter index of the entry to get detailed information of the contact >> " << flush;
		cin >> input;

		--input;
		if (cin.good() == false || input < 0 || input > 7 || contacts[input].isObjectInitialized() == false) {
			cout << "Invalid Input, Please press Enter/Return key to try again." << flush;
			cin.clear();
			cin.ignore();
			getchar();
			clrscr();
		} else {
			cout << endl << "First Name: " << contacts[input].getFirstName() << endl << flush;
			cout << "Last Name: " << contacts[input].getLastName() << endl << flush;
			cout << "Nickname: " << contacts[input].getNickName() << endl << flush;
			cout << "Phone Number: " << contacts[input].getPhoneNumber() << endl << flush;
			cout << "Darkest Secret: " << contacts[input].getDarkestSecret() << endl << endl << flush;
			return;
		}
	}	
}
