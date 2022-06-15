//Password Validator

#include <iostream>
#include <cwctype>
using namespace std;

int main(){
	bool lower, upper, digit, special;
	string s;
	cout<<"***This is a password validator program*** \n\n";
	
	cout<<"Enter a password - ";
	cin>>s;											//taking password input
	
	
	int len = s.length();
	digit = lower = upper = special = false;
	for(int i=0; i<len; ++i){
		if(islower(s[i]))							//checks for lowercase letters
			lower = true;
		if(isupper(s[i]))							//checks for uppercase letters
			upper = true;
		if(isdigit(s[i]))							//checks for digits
			digit = true;
		if(iswalnum(s[i])==0)						//checks for special characters
			special = true;
	}
	
	string strength;
	if(len>8 && lower && upper && digit && special)
		cout<<"\nPassword Strength - Strong \n";
	else
		cout<<"\nPassword Strength - Weak \n";
	
	cout<<"Length - \t\t";
	(len>8) ? cout<<len<<endl : cout<<"Password is quite small (size<8)"<<endl;
	cout<<"Uppercase letter - \t";
	upper ? cout<<"Contains uppercase letter"<<endl : cout<<"X Does not contain uppercase letter X"<<endl;
	cout<<"Lowercase letter - \t";
	lower ? cout<<"Contains lowercase letter"<<endl : cout<<"X Does not contain lowercase letter X"<<endl;
	cout<<"Digits - \t\t";
	digit ? cout<<"Contains digits"<<endl : cout<<"X Does not contain digits X"<<endl;
	cout<<"Special characters - \t";
	special ? cout<<"Contains special characters"<<endl : cout<<"X Does not contain special characters X"<<endl;
	
}
