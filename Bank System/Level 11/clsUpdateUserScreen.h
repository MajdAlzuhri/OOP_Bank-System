#pragma once
#include <iostream>
#include "clsUser.h"
#include "clsScreen.h"
#include "clsInputValidate.h"

using namespace std;


class clsUpdateUserScreen :protected clsScreen
{

private:

    static void _ReadUserInfo(clsUser& User) {

        cout << "Enter First Name : ";
        User.FirstName = clsInputValidate::ReadString();

        cout << "Enter Last Name : ";
        User.LastName = clsInputValidate::ReadString();

        cout << "Enter Email : ";
        User.Email = clsInputValidate::ReadString();

        cout << "Enter Phone Number : ";
        User.Phone = clsInputValidate::ReadString();

        cout << "Enter Username : ";
        User.UserName = clsInputValidate::ReadString();

        cout << "Enter Password : ";
        User.Password = clsInputValidate::ReadString();

        cout << "Enter Permission : ";
        User.Permissions = _ReadPermissionToSet();
    }

    static void _PrintUser(clsUser User) {

        cout << "\nUser Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << User.FirstName;
        cout << "\nLastName    : " << User.LastName;
        cout << "\nFull Name   : " << User.FullName();
        cout << "\nEmail       : " << User.Email;
        cout << "\nPhone       : " << User.Phone;
        cout << "\nUsername    : " << User.UserName;
        cout << "\nPassword    : " << User.Password;
        cout << "\nPermissions     : " << User.Permissions;
        cout << "\n___________________\n";


    }

    static int _ReadPermissionToSet() {

        int Permission = 0;
        char Answer = 'n';

        cout << "Do you want to give all access ? y/n? ";
        cin >> Answer;
        if (Answer == 'y') {
            return -1;
        }

        cout << "Do you want to give access to : \n";

        cout << "Show Client List ? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pListClients;
        }


        cout << "\nAdd New Client? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pAddNewClient;
        }


        cout << "\nDelete Client? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pDeleteClient;
        }


        cout << "\nUpdate Client? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pUpdateClients;
        }


        cout << "\nFind Client? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pFindClient;
        }


        cout << "\nTransactions? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pTranactions;
        }


        cout << "\nManage Users? y/n? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y') {

            Permission += clsUser::enPermissions::pManageUsers;
        }

        return Permission;

    }


public:

    static void ShowUpdateUserScreen()
    {

        _DrawScreenHeader("\tUpdate User Screen");

        string Username = "";

        cout << "\nPlease Enter Username: ";
        Username = clsInputValidate::ReadString();

        while (!clsUser::IsUserExist(Username))
        {
            cout << "\nUsername is not found, choose another one: ";
            Username = clsInputValidate::ReadString();
        }

        clsUser User1 = clsUser::Find(Username);

        _PrintUser(User1);

        cout << "\nAre you sure you want to update this User y/n? ";

        char Answer = 'n';
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y')
        {

            cout << "\n\nUpdate User Info:";
            cout << "\n____________________\n";


            _ReadUserInfo(User1);

            clsUser::enSaveResults SaveResult;

            SaveResult = User1.Save();

            switch (SaveResult)
            {
            case  clsUser::enSaveResults::svSucceeded:
            {
                cout << "\nUser Updated Successfully :-)\n";

                _PrintUser(User1);
                break;
            }
            case clsUser::enSaveResults::svFaildEmptyObject:
            {
                cout << "\nError account was not saved because it's Empty";
                break;

            }

            }

        }

    }

};

