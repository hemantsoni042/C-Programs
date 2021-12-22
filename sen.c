// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     // char *s;
//     // s = malloc(1024 * sizeof(char));
//     // scanf("%[^\n]", s);
//     // s = realloc(s, strlen(s) + 1);
//     //Write your logic to print the tokens of the sentence here.
//     char s[1000];
//     int i;
//     i=0;
//     gets(s);
//     while(1)
//     {
//         if(s[i] != " "){
//         printf("%c",s[i]);
//         }
//         else if(s[i] == NULL){
//             break;
//         }
//         else {
//         printf("\n");
//         }
//         i++;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// //Complete the following function.

// int marks_summation(int* marks, int number_of_students, char gender) {
//   //Write your code here.
// }

// int main() {
//     int number_of_students;
//     char gender;
//     int sum;
  
//     scanf("%d", &number_of_students);
//     int *marks = (int *) malloc(number_of_students * sizeof (int));
 
//     for (int student = 0; student < number_of_students; student++) {
//         scanf("%d", (marks + student));
//     }
    
//     scanf(" %c", &gender);
//     sum = marks_summation(marks, number_of_students, gender);
//     printf("%d", sum);
//     free(marks);
 
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length,width,height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    int a=1;
    a = a*(box b);
    return a;
    
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if(box b <= 40)
    {
        return 1; 
    }else
    {
        return 0;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}