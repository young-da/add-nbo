#include "fileread.h"

uint32_t fileread(char fn[]){
       uint32_t buf;
       FILE *fp = fopen(fn, "rb");

       fread(&buf, 4, 1, fp);
       uint32_t n = ntohl(buf);

       fclose(fp);
       return n;
}

