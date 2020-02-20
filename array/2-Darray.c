#include <stdio.h>
int main(){
    int arr[3][3];
    char sumType;
    int index;
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("\n");
    scanf("%c %d", &sumType, &index);
    printf("%c %d\n",sumType, index);

    if(sumType == 'r') {
        for(int i = 0; i < 3; i++) {
            sum = sum + arr[index][i];
        }
    }else if(sumType == 'c') {
        for(int i = 0; i < 3; i++) {
            sum = sum + arr[i][index];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    printf("%d", sum);


    return 0;
}