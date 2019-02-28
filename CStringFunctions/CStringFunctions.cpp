// Robert Wood Jr
// Programming Assignment 8
// CStringFunctions
// 

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void reverse(char *);
int wordCount(char *);
void nameFormatter(char *, char *, char *, char *);

const int max_full_name_length = 45;

int main() {
	// test reverse function
	char word1[] = "Gravity";
	char word2[] = { 'w', 'o', 'r', 'l', 'd', '\0' };

	cout << word1 << " reversed is ";
	reverse(word1);
	cout << word1 << endl;
	cout << word2 << " reversed is ";
	reverse(word2);
	cout << word2 << endl;

	// test wordCount function
	char word3[] = "Four score and seven years ago";
	cout << word3 << " contains " << wordCount(word3) << " words." << endl;
	char word4[] = "Four";
	cout << word4 << " contains " << wordCount(word4) << " words." << endl;
	char word5[] = "";
	cout << word5 << " contains " << wordCount(word5) << " words." << endl;

	// test nameFormatter
	char first[] = "Forrest";
	char middle[] = "George";
	char last[] = "Gump";
	char fullName[max_full_name_length] = { '\0' };
	cout << "Formatting " << first << " " << middle
		<< " " << last << ": ";
	nameFormatter(first, middle, last, fullName);
	cout << fullName << endl;


	system("pause");
	return 0;
}

void reverse(char * word) {
	//// TO DO: implement this function
	//
	//char wordRev[] = { '\0' };
	//strncpy(wordRev, word, strlen(word));
	////for (int i = 0; i < strlen(word); ++i) {
	////	wordRev[i] = word[i];
	////}
	//int count = 0;
	//for (size_t r = strlen(word); r >= 0; --r) {
	//	word[count] = wordRev[r] ;
	//	++count;
	//}
}
int wordCount(char * sentence) {
	// TO DO: implement this function
	int numOfWords = 0;
	/*if (sentence == NULL) {
		return 0;
	}*/

	

	return numOfWords;
}
void nameFormatter(char * first, char * middle, char * last, char * fullName) {
	// TO DO: implement this function
	strncpy(fullName, last, strlen(last));
	strncat(fullName, ", ", 2);
	strncat(fullName, first, strlen(first));
	strncat(fullName, " ", 1);
	strncat(fullName, middle, 1);
}