#include <stdio.h>
#include <stdlib.h>

#define Frame_size 256 //frame size is 256 frames.
#define Page_size 256 // page size of 2^8 bytes.

int page_number(int logical_address);
int extract_offset(int logical_address);
int translate_address(int logical_address);


int extract_pagenum(int logical_address){
    int page_number = (logical_address >> 8) & 0x00FF;
}
int extract_offset(int logical_address){
    int Offset = logical_address & 0x00FF;
}
