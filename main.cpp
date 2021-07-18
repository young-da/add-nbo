#include "fileread.h"

int main(int argc, char* argv[]){
       if(argc != 3){
         printf("두 개의 파일을 입력해주세요.\n");
         exit(1);
       }

       uint32_t num = fileread(argv[1]);
       uint32_t num2 = fileread(argv[2]);

       printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", num, num, num2, num2, num + num2, num + num2);
}
