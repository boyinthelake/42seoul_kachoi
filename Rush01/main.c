#include <unistd.h>

int main(int argc, char argv[])
{
	int col_up[4];
	int row_left[4];
	int col_down[4];
	int row_right[4];
	int arr[4][4];
	
	col_up[0] = 4;
	col_up[1] = 3;
	col_up[2] = 2;
	col_up[3] = 1;
	row_left[0] = 4;
	row_left[1] = 3;
	row_left[2] = 2;
	row_left[3] = 1;
	col_down[0] = 1;
	col_down[1] = 2;
	col_down[2] = 2;
	col_down[3] = 2;
	row_right[0] = 1;
	row_right[1] = 2;
	row_right[2] = 2;
	row_right[3] = 2;
	ArrayFill(col_up, row_left, col_down, row_right, arr);
	return 0;
}
