#include <stdio.h>
#include <string.h>

int main()
{
	char original[] = "Am I the original?";
	char duplicate[1];

	// when the placeholder for the duplicate is shorter
	// than original, then there is overflow and different
	// results can occur. In my case, the duplicate
	// was fine, but the original was not
	printf("Here is the original string: %s\n", original);
	strcpy(duplicate, original);
	printf("Here is the duplicate: %s original %s\n", duplicate, original);

	return (0);
}
