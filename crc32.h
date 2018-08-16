#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   
#include <errno.h>   
#include <unistd.h>   
#include <fcntl.h>   
#include <sys/stat.h>

static unsigned int crc_table[256];  
static void init_crc_table(void);  
static unsigned int crc32(unsigned int crc, unsigned char * buffer, unsigned int size);  

static void init_crc_table(void)  
{  
    unsigned int c;  
    unsigned int i, j;  
      
    for (i = 0; i < 256; i++) {  
        c = (unsigned int)i;  
        for (j = 0; j < 8; j++) {  
            if (c & 1)  
                c = 0xedb88320L ^ (c >> 1);  
            else  
                c = c >> 1;  
        }  
        crc_table[i] = c;  
    }  
}  
  
 
static unsigned int crc32(unsigned int crc,unsigned char *buffer, unsigned int size)  
{  
    unsigned int i;  
    for (i = 0; i < size; i++) {  
        crc = crc_table[(crc ^ buffer[i]) & 0xff] ^ (crc >> 8);  
    }  
    return crc ;  
} 
