//TODO #include "sudoku.h"
char *search_empty(char **field)
{
	int y;
	int x;
	char cords[] = {'10', '10'};
	
	x = 0;
	y = 0;
	while (y < 9)
	{   
		while(x < 9)
		{
			if(field[y][x] == '0')//!!!!!! y-x, not x-y, possible errors !!!!!!!!!!!!!
			{
				cords[0] = y + '0';
				cords[1] = x + '0';
				return (cords);
			}
			x++;
	    }
		y++;
	}
	return (cords);
}


void set_cell(char **field, char *cords, char num)
{
	field[cords[0]][cords[1]] = num + '0';
}

int sudoku(char **field)
{
	char cords[];
	int i;

	cords = search_empty(field);
	if (cords[0] == '10')
		return (1);
	i = 1;
	while (i < 10)
	{
		set_cell(field, cords, i);
		if (is_valid(field) && sudoku(field)) //TODO is_valid_local(), print field(only complete one)
				return (1);
		i++;
	}
	return (0);
}
