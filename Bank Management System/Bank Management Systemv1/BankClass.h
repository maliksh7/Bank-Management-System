#include <iostream>
#include <string> 
#include <ctime> 
#include <fstream>
#include <cstdlib>
#include <fstream>

using namespace std;
#ifndef UDAT
#define UDAT

	struct user_data {
		string name, password;
		int pin;
		double balance;
	};
#endif // !UDAT
#ifndef ADMIN
#define ADMIN



	class Adminclass{
	private:
		 string username;
		 string password;
		 int pin;

	public:
		bool Admin_login(string usernam,string passwor);
		bool modifyAccount(int pin,string name,string password,bool changename, bool changepass);
		bool account_status(int pin);
		bool remove_account(int pin);
	}newAdmin;

#endif

#ifndef USER
#define USER


	class Userclass {
	private:
		double balance;
		string username, password;
		int dateOFbirth, pin;

	public:

		void setPass(string pass) {
			this->password = pass;
		}

		void setUsername(string user) {
			this->username = user;
		}

		string getPass() {
			return this->password;
		}

		string getUsername() {
			return this->username;
		}

		int create_account(string name, string password,string cpass);
		bool login_account(string name, string password);
		bool deposit_amount(int balance);
		bool withdraw_amount(double balance);
		double check_balance(string password);

		bool TransferFunds(int pin,double balance);


	}newUser;


#endif//ADMIN

//#endif // USER

int random_num() {
	srand(time(NULL));
	return rand() % 10000000 + 1000000000;
}
	
int file_counter() {
		string line;
		ifstream in;
		in.open("accounts.txt", ios::in);
		int count = 0;
		while (getline(in, line))
		{
			if (in)
				count++;
		}

		return count;

	}
	
bool Userclass::TransferFunds(int pin, double balance) {

	int count = 0;
	ifstream in;

	count = file_counter();
	user_data *n = NULL;
	n = new user_data[count];
	in.open("accounts.txt", ios::in);
	bool flag = true;
	int i = 0;
	while (in)
	{
		if (in)
		{

			in >> n[i].name;
			in >> n[i].password;
			in >> n[i].pin;
			in >> n[i].balance;
			i++;
		}
	}
	in.close();

	if (flag) {

		for (int i = 0; i < count; i++)
		{
			if (n[i].password == password)
			{
				if (n[i].balance == 0 || n[i].balance < balance)
				{
					flag = false;
					return false;

				}
			}
		}
	}
	else
	{

		for (int i = 0; i < count; i++)
		{


			if (n[i].password == password)
			{
				n[i].balance -= balance;

				ofstream out;
				out.open("accounts.txt", ios::trunc);
				for (int i = 0; i < count; i++)
				{
					out << n[i].name << " ";
					out << n[i].password << " ";
					out << n[i].pin << " ";
					out << n[i].balance << " ";
					out << endl;
				}
				out.close();

			}
			else if (n[i].pin == pin)
			{
				n[i].balance += balance;

				ofstream out;
				out.open("accounts.txt", ios::trunc);
				for (int i = 0; i < count; i++)
				{
					out << n[i].name << " ";
					out << n[i].password << " ";
					out << n[i].pin << " ";
					out << n[i].balance << " ";
					out << endl;
				}
				out.close();
				flag = true;
				return true;

			}
		}
		
	}
	
}


	bool Adminclass::Admin_login(string name ,string password) {
		if (name == "") {
			return false;

		}

		int count = 0;
		ifstream in;
		bool flag = true;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("admin.txt", ios::in);
		int i = 0;
		while (in)
		{
			if (in)
			{
				in >> n[i].name;
				in >> n[i].password;
				i++;
			}
		}
		in.close();

		if (flag)
		{
			for (int i = 0; i < count; i++)
			{
				if (n[i].name == name && n[i].password == password)
				{
					flag = false;
					return true;
				}

			}

		}

		else
		{
			flag = true;
			return false;
		}

		return false;
	}

	bool Adminclass::remove_account(int pin) {
		int count = 0;
		int x;
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("accounts.txt", ios::in);
		int i = 0;
		bool flag = true;
		while (in)
		{
			if (in) {
				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}
		}
		in.close();

		if (flag) {

			for (int i = 0; i < count; i++)
			{
				if (n[i].pin == pin)
				{
					x = i;
					ofstream out;
					out.open("accounts.txt", ios::trunc);
					for (int i = 0; i < count; i++)
					{
						if (i == x)
						{
							continue;
						}
						else
						{
							out << n[i].name << " ";
							out << n[i].password << " ";
							out << n[i].pin << " ";
							out << n[i].balance << " ";
							out << endl;
						}
					}

					out.close();
					flag = false;
					return true;
				}

			}
		}
		else {
			flag = true;
			return false;
		}
		return false;
	}
		
	bool Adminclass::account_status(int pin) {
		int count = 0;
		int i = 0;
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		bool flag = true;
		in.open("accounts.txt", ios::in);


			while (in)
			{
				if (in)
				{
					in >> n[i].name;
					in >> n[i].password;
					in >> n[i].pin;
					in >> n[i].balance;
					i++;
				}
			}
			in.close();

			if (flag)
			{
				for (int i = 0; i < count; i++)
				{
					if (n[i].pin == pin)
					{
						return true;
						flag = false;
					}

				}
			}
			else 
			{
				flag = true;
				return false;
			}
			return false;


	}

	bool Adminclass::modifyAccount(int pin,string name,string password, bool changename, bool changepass) {

		int count = 0; 
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		string new_user, new_pass;
		in.open("accounts.txt", ios::in);
		int i = 0;
		bool flag = true;
		while (in)
		{
			if (in)
			{
				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}
		}
		in.close();

		while (flag)
		{
			if (flag)
			{

				for (int i = 0; i < count; i++)
				{
					if (n[i].pin == pin)
					{
						if (changepass == true && changename == true) {
							n[i].name = name;
							n[i].password = password;
							ofstream out;
							out.open("accounts.txt", ios::trunc);
							for (int i = 0; i < count; i++)
							{
								out << n[i].name << " ";
								out << n[i].password << " ";
								out << n[i].pin << " ";
								out << n[i].balance << " ";
								out << endl;
							}
							out.close();
							flag = false;
							return true;

						}
						else if (changename == true)
						{
							n[i].name = name;
							ofstream out;
							out.open("accounts.txt", ios::trunc);
							for (int i = 0; i < count; i++)
							{
								out << n[i].name << " ";
								out << n[i].password << " ";
								out << n[i].pin << " ";
								out << n[i].balance << " ";
								out << endl;
							}
							out.close();
							flag = false;
							return true;
						}
						else if (changepass == true)
						{
							n[i].password = password;
							ofstream out;
							out.open("accounts.txt", ios::trunc);
							for (int i = 0; i < count; i++)
							{
								out << n[i].name << " ";
								out << n[i].password << " ";
								out << n[i].pin << " ";
								out << n[i].balance << " ";
								out << endl;
							}
							out.close();
							flag = false;
							return true;
						}
	
					}

				}
			}

			else
			{
				flag = true;
				return false;
			}
			return false;

		}

	}
	
	int Userclass::create_account(string name, string password, string cpass) {
		bool check = true;
		bool flag = true;
		while (flag) {

		if (flag)
		{
				if (password == password && password == cpass)
				{
					pin = random_num();
					balance = 0.0;
					ofstream out;
					out.open("accounts.txt", ios::app);
					out << name << " " << password << " " << pin << " " << balance << endl;
					out.close();
					check = false;

					return pin;
				}
				else
				{
					check = true;
					return 0;
				}
			}
		}
	}

	bool Userclass::login_account(string name, string password) { 

		int count = 0;
		ifstream in;
		bool flag = true;  
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("accounts.txt", ios::in);
		int i = 0;
		while (in)
		{
			if (in)
			{
				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}

		}
		in.close();

		if (flag)
		{
			for (int i = 0; i < count; i++)
			{
				if (n[i].name == name && n[i].password == password)
				{
					flag = false;

					return true;
				}
			}
		}
		if (flag == true)
		{
			return false;
		}

		return false;

	}
	
	bool Userclass::deposit_amount(int balance) {
		int count = 0;
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("accounts.txt", ios::in);
		int i = 0;
		bool flag = true;

		while (in)
		{
			if (in)
			{


				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}
		}
		in.close();

		if (flag) {
			for (int i = 0; i < count; i++)
			{
				if (n[i].password == password)
				{
					n[i].balance += balance;

				}
			}

			ofstream out;
			out.open("accounts.txt", ios::trunc);
			for (int i = 0; i < count; i++)
			{
				out << n[i].name << " ";
				out << n[i].password << " ";
				out << n[i].pin << " ";
				out << n[i].balance << " ";
				out << endl;
			}
			out.close();
			flag = false;
			return true;
		}
		else
		{
			flag = true;
			return false;
		}
		return false;

	}
	
	bool Userclass::withdraw_amount(double balance) {
		int count = 0;
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("accounts.txt", ios::in);
		int i = 0;
		bool flag = true;

		while (in)
		{
			if (in)
			{


				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}
		}
		in.close();
		if (flag) {
			for (int i = 0; i < count; i++)
			{
				if (n[i].password == password)
				{
					if (n[i].balance > 500 && n[i].balance >=balance ) 
					{
						n[i].balance -= balance;
						ofstream out;
						out.open("accounts.txt", ios::trunc);
						for (int i = 0; i < count; i++)
						{
							out << n[i].name << " ";
							out << n[i].password << " ";
							out << n[i].pin << " ";
							out << n[i].balance << " ";
							out << endl;
						}
						out.close();
						flag = false;
						return true;
					}


				}
			}
			
		}
		else
		{
			flag = true;
			return false;
		}
		return false;
	


	}
	
	double Userclass::check_balance(string password) {
		int count = 0;
		ifstream in;
		count = file_counter();
		user_data *n = NULL;
		n = new user_data[count];
		in.open("accounts.txt", ios::in);
		int i = 0;
		while (in)
		{
			if (in)
			{


				in >> n[i].name;
				in >> n[i].password;
				in >> n[i].pin;
				in >> n[i].balance;
				i++;
			}
		}
		in.close();


		for (int i = 0; i < count; i++)
		{
			if (n[i].password == password)
			{
				//cout << "Your current account balance is  " << n[i].balance << endl;
				return n[i].balance;
			}
		}
	}
	
// end of namespace

