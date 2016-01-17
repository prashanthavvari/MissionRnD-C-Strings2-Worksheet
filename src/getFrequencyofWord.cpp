/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int iter1, iter2 = 0, countlet = 0, countwrd = 0, lenwrd = 0, flag = 0;
	for (iter1 = 0; word[iter1] != '\0'; iter1++)
		lenwrd++;
	iter1 = 0;
	while (str[iter1] != '\0')
	{
		if (str[iter1] != ' ' || word[iter2] == ' ')
		{
			if (str[iter1] == word[iter2])
			{
				countlet++;
				iter2++;
				if (str[iter1] == str[iter1 - 1] && lenwrd == 2)
					countwrd++;
			}
			else
			{
				if (str[iter1] == word[0])
					iter1 = iter1 - 1;
				countlet = 0;
				iter2 = 0;
			}
		}
		if (countlet == lenwrd &&word[0]!=word[1])
		{
			countwrd++;
			countlet = 0;
			iter2 = 0;
		}
		iter1++;
	}
	return countwrd;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

