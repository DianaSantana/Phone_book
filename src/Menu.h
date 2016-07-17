
#ifndef MENU_H_
#define MENU_H_
#include "List.h"

class Menu
{
	private:
		void clearScreen();
		void listContacts();
		void addContacts();
		void removeContacts();
		void modifyContacts();
		bool validate(int option);
		void routeAction(int option);
		void pause();
	public:
		Menu();
		void show();
};

#endif /* MENU_H_ */
