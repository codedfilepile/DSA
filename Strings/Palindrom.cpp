#include<iostream>
#include<string>

using namespace std;

string solve(string str){

		for(int i=0, j=str.size(); i<j; i++,j--){
			while(isalnum(str[i])==0 &&i<j)i++;
			while(isalnum(str[j])==0 &&i<j)j--;
			if(toupper(str[i])!=toupper(str[j]))return "invalid string";
		}
		return "valid string";
	}

int main(){
	string str = "A man, a plan, a canal: Panama";
	string op = solve(str);
	cout<<op;
}
