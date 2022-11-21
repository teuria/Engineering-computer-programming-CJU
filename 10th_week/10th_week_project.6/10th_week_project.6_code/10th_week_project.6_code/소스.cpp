#include <stdio.h>

typedef enum COLOR { CYAN, MAGENTA, YELLOW = 5, BLACK };
typedef enum ARROW { UP, DOWN, LEFT, RIGHT };

int main(void)
{
	COLOR my_color = YELLOW;
	int c;
	ARROW direction = UP;
	int d = direction;

	for (c = CYAN; c <= BLACK; c++)
	{
		d++;
		d = d % 4;
		if (c == my_color) 
			break;
	}

	switch (direction)
	{
		case UP: printf("Current Direction : UP"); 
			break;
		case DOWN: printf("Current Direction : DOWN");
			break;
		case LEFT: printf("Current Direction : LEFT");
			break;
		case RIGHT: printf("Current Direction : RIGHT");
			break;
	}
	return 0;
}
