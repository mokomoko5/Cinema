#include <string>
#include <QtWidgets>
#include "UserManagementSystem.h"

#pragma once
using namespace std;


class User
{
protected:
    string first_name_;
    string last_name_;
    QDate dob_;
    string username_;
    string password_;
    string email_;
public:
    static User * SignIn(string username,string password);
};
