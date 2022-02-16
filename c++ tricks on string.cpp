#include<bits/stdc++.h>
using namespace std;
int main(){
	// checking ascii code of letter
	int x='A';
	cout<<x<<endl;
	 
	 // for changing word in string
	 string s="imran";
	 s[3]++;
	 cout<<s<<endl;
	 
	 // checking upper or lower letter
	 string s1;
	 cin>>s1;
	 if('A'<=s1[0] && s1[0]<='Z'){
	 	cout<<"UPPER LETTER"<<endl;
	 }else{
	 	cout<<"LOWER LETTER"<<endl;
	 }
	 
	 // assuming every characture a->0, b->1, c->2, and so on
	 
	 string k="zebre";
	 for(auto &c : k){
	 	int y=c-'a';
		 cout<<y<<" ";
	 }cout<<endl;
	 
	 // print square for given digit
	 string digit="6abcd";
	 int z=digit[0]-'0';
	 cout<<z*z<<endl;
}