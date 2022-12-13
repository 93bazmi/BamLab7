#include<iostream>
#include<string>

using namespace std;

string func1(string x){ //Reversed
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){ 
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){ 
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}


int main(){
	string in ;
    cout  << "Input text: " ;
	cin  >> in ;

	string re = func1(in) ;
	string reTosmall = func3(re) ;
    cout << "Reversed text: " << re << endl ;

	if(in != reTosmall ){
		string small = func3(in) ;
		if( small == reTosmall){
			cout << "Palindrome: Yes" ; 
		}else{
			cout << "Palindrome: No" ;
		}
	}else{
		cout << "Palindrome: Yes" ;
	}
    return 0;
}
