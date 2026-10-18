#include <stdio.h>

#define ARRAY_SIZE (16)
#define EMPTY (-1)

int get_size(int array[], int array_size)
{
	int count = 0;
	int i = 0;

	for (i = 0; i < array_size; i++) {
		if (array[i] != EMPTY)
			count++;

	}
	return count;
}

void printf_array(int array[], int array_size)
{
	int i;
	printf("size  %d, arrray", get_size(array, array_size));
	for (i = 0; i < array_size; i++)
	{
		printf("%d", array[i]);
	}

	printf("\n");
}

int insert_item(int array[], int array_size, int index, int value)
{
	int size = get_size(array, array_size);
	int i, read_index, write_index;

	if (size >= array_size)
		return 0;
	if (index < 0 || index > size)
		return 0;
	if (value < 0)
		return 0;

	write_index = 0;

	for (read_index = 0; read_index < array_size; read_index++)
	{
		if (array[read_index] != EMPTY)
			array[write_index++] = array[read_index];
	}
	for (i = write_index; i < array_size; i++)
		array[i] = EMPTY;

	for (i = size; i > index; i--)
		array[i] = array[i - 1];
	array[index] = value;

	return 1;

}

int delet_item(int array[], int array_size, int index)
{
	int size = get_size(array, array_size);
	int i;
	int logical_index = 0;
	if (index < 0 || index >= size)
		return 0;

	for (i = 0; i < array_size; i++)
	{


	}
}
int main()
{
	
}
