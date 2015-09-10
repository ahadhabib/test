/* THIS IS PALIN.C */
#include <stdio.h>
int main () {

  int k=1, p=1, length = 0;
  char yolo[20];
  printf("Please enter a string > ");
  scanf("%[^\n]s", yolo);
  /*scanf("%20s", yolo);*/

  while(k != 0){
    if (yolo[p-1] != 0){
      length = length + 1;
    }
   k = yolo[p-1];
   p = p +1;
  }

  if(length > 20){return 0;};

  char yolo2[length*1];

  for(p = 0; p < length; p++){
    yolo2[p]=yolo[p];
    yolo2[length*2-p-1] = yolo[p];
  }

  printf("The palindrome is <");
  for(k = 0; k < length*2; k++){printf("%c",(char) yolo2[k]);}
  printf(">\n");

return(0);
}
