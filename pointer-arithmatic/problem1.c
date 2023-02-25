int main(){


    int x = 10;
    int y = 15;

    int *temp1 = &x;
    int *temp2 = &y;


    printf("x : %d : %d \n", x,&x);
    printf("y : %d : %d \n", y,&y);

    y = *temp1;
    x = *temp2;

    printf("x : %d : %d\n", x,&x);
    printf("y : %d : %d\n", y,&y);

    return 0;
}
