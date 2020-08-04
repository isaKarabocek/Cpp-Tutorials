#include<iostream>
#include<string>

using namespace std;

bool isVowel(char c) {
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int NumberOfVowels(string word) {
	int v = 0;
	for (int i = 0; i < word.size(); ++i) {
		if (isVowel(word[i])) {
			++v;
		}
	}
	return v;
}
int NumberOfConsonants(string word) {
	int c = 0;
	for (int i = 0; i < word.size(); ++i) {
		if (((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) && !isVowel(word[i])) {
			c++;
		}
	}
	return c;
}
int main()
{
	string str;
	cout << "enter the string: \n" << endl;
	cin >> str;
	cout << "Number of vowels = " << NumberOfVowels(str) << endl;
	cout << "Number of consonants = " << NumberOfConsonants(str) << endl;
	return 0;
}