#include <stdio.h>

/*
Напишите программу преобразования прописных букв из файла ввода в строчные, 
используя при этом функцию power(c), которая возвращает значение 'c', если 'c' - не буква, 
и значение соответствующей строчной буквы, если 'c' - буква.
*/

/* Прототип функции */
void power(int word);

int main()
{
	int c;

	printf("Enter text:\n");

	while((c = getchar()) != EOF) { power(c);}

	printf("\n");
	return 0;
}


/* Функция перевода прописных букв в стрчные */
void power(int word)
{

	if(word >= 'A' && word <= 'Z')
	{
		word = word + ('a' - 'A');
		printf("%c", word);
	}
	else { printf("%c", word); }

	return;
}