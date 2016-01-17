/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
char * get_last_word(char * str){
		int iter, len = 0, iter2, ind = 0, iter3 = 0;
		char *result = (char*)malloc(sizeof(char)*20);
		if (str[0] == '\0')
		{
			result[0] = '\0';
			return result;
		}
		for (iter = 0; str[iter] != '\0'; iter++)
		{
			len = len + 1;
		}
		for (iter3 = len - 1; iter3 >= 0; iter3--)
		{
			if ((str[iter3] != ' '))
				break;
		}
		if (iter3 == -1 && str[0] == ' ')
		{
			result[0] = '\0';
			return result;
		}
		for (iter = iter3; iter >= 0; iter--)
		{
			if (str[iter] == ' ')
				break;
		}
		if (iter3 > iter)
		{
			for (iter2 = iter + 1; iter2 <= iter3; iter2++)
			{
				result[ind] = str[iter2];
				ind++;
			}
				result[ind] = '\0';
				return result;
		}
		else
			return '\0';
}