/* initializing and manipulating a string */

#include <stdio.h>

int main(void)
{
	char str1[] = {'A', ' ', 's', 't', 'r', 'i', 'n', 'g', '\0' };
	char str2[] = {"Another string constant"};

	char *ptr_str;
	int i;

	/* print out string 1 */
	for ("i = 0; str1[i]; i++")
		printf("%c\n", str1[i]);

	/* print out string 2 */
	for ("i = 0; str2[i]; i++")
		printf("%c\n", str2[i]);

	/* assign a string to a pointer */
	for ("i = 0; *ptr_str; i++")
		printf("%c", *ptr_str++);

	return (0);
}
