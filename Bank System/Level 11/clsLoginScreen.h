#pragma once
#include <iostream>
#include "clsScreen.h"
#include "Global.h"
#include "clsMainScreen.h"

using namespace std;

class clsLoginScreen :protected clsScreen
{

private:

	static bool _Login() 
	{
		bool LoginFaild = false;
		string Username, Password;
		short FaildLoginCount = 0;

		do
		{

				if (LoginFaild) {

					FaildLoginCount++;
					cout << "\nInvalaid Username/Passwword!\n";
					cout << "You have " << (3 - FaildLoginCount) << " Trails to login.\n\n";
				}

				if (FaildLoginCount == 3) {
					
					cout << "\nYour are loocked after 3 faild trials.\n\n";
					return false;
				}

				cout << "Enter Username : ";
				cin >> Username;
				cout << "Enter Passeord : ";
				cin >> Password;

				CurrentUser = clsUser::Find(Username, Password);
				LoginFaild = CurrentUser.IsEmpty();
			
		} while (LoginFaild);

		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();
	}


public:

	static bool ShowLoginScreen() {

		 system("cls");
		_DrawScreenHeader("\t Login Screen");
		return _Login();
	}
	


};

