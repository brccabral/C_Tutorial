#include <stdio.h>

// needs to define the struct before any use
struct pixel
{
	int horz;
	int vert;
	char color;
};

void show_pixel(struct pixel p);

int main()
{
	struct pixel center;

	center.horz = 320;
	center.vert = 240;
	center.color = 'r';

	show_pixel(center);

	return (0);
}

void show_pixel(struct pixel p)
{
	printf("Pixel found at %d,%d, color = ",
		   p.horz,
		   p.vert);
	switch (p.color)
	{
	case 'r':
		puts("red");
		break;
	case 'g':
		puts("green");
		break;
	case 'b':
		puts("blue");
		break;
	default:
		puts("Invalid");
	}
}
