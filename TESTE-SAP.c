//Header Files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/* only used in string related operations */
typedef struct String string;
struct String
{
    char *str;
};

char *input(FILE *fp, int size, int has_space)
{
    int actual_size = 0;
    char *str = (char *)malloc(sizeof(char)*(size+actual_size));
    char ch;
    if(has_space == 1)
    {
        while(EOF != (ch=fgetc(fp)) && ch != '\n')
        {
            str[actual_size] = ch;
            actual_size++;
            if(actual_size >= size)
            {
                str = realloc(str,sizeof(char)*actual_size);
            }
        }
    }
    else
    {
        while(EOF != (ch=fgetc(fp)) && ch != '\n' && ch != ' ')
        {
            str[actual_size] = ch;
            actual_size++;
            if(actual_size >= size)
            {
                str = realloc(str,sizeof(char)*actual_size);
            }
        }
    }
    actual_size++;
    str = realloc(str,sizeof(char)*actual_size);
    str[actual_size-1] = '\0';
    return str;
}
/* only used in string related operations */

typedef struct array_single_int array_single_int;
struct array_single_int
{
	int *data;
	int size;
};


/*
 *
 */
array_single_int  orderPizza(array_single_int orderPlaced, int size)
{
    array_single_int  answer;
    int check = 0;
    answer.size = 0;
    answer.size = orderPlaced.size - size +1;
    answer.data = (int *)malloc(sizeof(int) * answer.size);
    int aux;
    for(int i =0; i <= orderPlaced.size-size; i++){
        for(int j = 0; j < size; j++){
            if(orderPlaced.data[j+i] < 0 && check == 0){
                aux = orderPlaced.data[j+i];
                answer.data[i] = aux;
                check = 1;
            }
        }
        if(check == 0){
            answer.data[i] = 0;
            check = 0;
        }
        else{
            check = 0;
        }
    }
    return answer;
}

int main()
{
    array_single_int orderPlaced;
	int size;

    //input for orderPlaced
	scanf("%d", &orderPlaced.size);
	orderPlaced.data = (int *)malloc(sizeof(int) * orderPlaced.size);
	for ( int idx = 0; idx < orderPlaced.size; idx++ )
	{
	    scanf("%d", &orderPlaced.data[idx]);
	}

	//input for size
	scanf("%d", &size);


    array_single_int result = orderPizza(orderPlaced, size);
	for(int idx = 0; idx < result.size - 1; idx++)
	{
		printf("%d ", result.data[idx]);
	}
	printf("%d", result.data[result.size - 1]);


    return 0;
}
