/*
 * +-----------------------------------------------+
 * | Module   :  Network Connection Manager        |
 * | Author   :  Alex Brown                        |
 * | Date     :  August 15, 2023                   |
 * | Version  :  2.0                               |
 * | Purpose  :  Establish and manage network      |
 * |          ... connections with remote servers.  |
 * +-----------------------------------------------+
 */
int BORDER_ROW = 5;
int BORDER_COLUMN = 3;
int BODER_MARKER = 3;
int TABLE_LENGTH = 1;
int TABLE_MARKER = 10;


#include<stdio.h>
int main (void){
    printf("HelloWorld\n");
    
    create_border(TABLE_LENGTH,TABLE_MARKER);
    create_border(TABLE_LENGTH,TABLE_MARKER);
    create_border(TABLE_LENGTH,TABLE_MARKER);
    
    return 0;
}
int add_plus(){
    printf("+");
    return 1;
}
void create_border (int length, int marker){
     int counter = 0;
     int position = 0;
     
     for (int k = length; k >= 0; k--){
  
	 for (int i = 0; i <= marker; i++){
	     if (i==0){
	        counter = counter + add_plus();
	     }
	     printf("-");
         }	
     }
     add_plus();  
     printf("\n");

     for (int k = counter; k >= 0; k--){
	 printf("%*s",position,"|");
         position = position + marker;	 
     }
     printf("\n");
}
