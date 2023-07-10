    #include<iostream>
using namespace std;
int calcAge(int year){
	return 2023 - year;
}
int compareAge(int age, int otherAge){
	return age == otherAge ? 1 : 0;	
}
int convert(int payement){
	return payement * 1000;
}
int main(){
	int userAge, birthYear, pay;
	cout<<"What's your age\n";
	cin>>userAge;
	if(userAge >= 18){
		cout<<"what's your birth year?\n";
		cin>>birthYear;
		int yourAge = calcAge(birthYear);
		if(compareAge(userAge, yourAge)==1){
			cout<<"Pay any amount you want in usd:\n";
			cin>>pay;
			cout<<"You've been payed"<<convert(pay)<<"RWF, please enjoy the party";
		}else {
			cout<<"Step aside!";
		}
		
	} else {
		cout<<"You're still young!!!!";
	
	}
	return 0;
}
