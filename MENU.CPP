#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

main() {
	clrscr();
	char user1[50], user2[50], pass1[50], pass2[50];
	int sel = 0;

	menu:
	cout<<"-------Menu-------"<<endl;
	cout<<"1. Register"<<endl;
	cout<<"2. Login"<<endl;
	cout<<"Select: ";
	cin>>sel;

	if (sel == 1) {
		cout<<"-------Register-------"<<endl;
		cout<<"Username: ";
		gets(user1);
		cout<<"\nPassword: ";
		gets(pass1);
		int lenght = strlen(pass1);
		int vowel = 0, digit = 0;
		if (lenght < 8|| lenght > 12) {
			cout<<"Invalid: Password must be 8 to 12 chracters long"<<endl;

			for (int i = 0; i < lenght; i++) {
				char lower = (pass1[i]);
					if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
						vowel++;
					}
					if (lower == '1' || lower == '2' || lower == '3' || lower == '4' || lower == '5' || lower == '6' || lower == '7' || lower == '8' || lower == '9' || lower == '0') {
						digit++;
					}
					if (vowel < 2) {
						cout<<"Invalid: Password must have at least two vowels"<<endl;
					}else if (digit < 2) {
						cout<<"Invalide: Password must have at least two numbers"<<endl;
					}
			}

			cout<<"Account Successfully registered"; }
			goto menu;
		}
	}else if (sel == 2) {
		while (attemps < 3) {
			cout<<"-------Login-------"<<endl;
			cout<<"Username: ";
			gets(user2);
			cout<<"\nPassword: ";
			gets(pass2);

			if (strcmp (user1, user2)==0 strcmp(pass1, pass2)==0) {
				cout<<"Login Successfully";
			}else {
				cout<<"Wrong username and password";
				attemps++;
			}
			cout<<"Maximum number of attempts exceeded. Program Terminated!";
			break;
		}
	}


	getch();
	return 0;
}
