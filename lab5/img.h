#ifndef IMG
#define IMG

#include <stdint.h>
typedef struct __attribute__((packed)){                                         
  uint16_t bfType;                                                        
  uint32_t  bfileSize;                                                    
  uint32_t bfReserved;                                                          
  uint32_t bOffBits;                                                      
  uint32_t biSize;                                                        
  uint32_t biWidth;                                                       
  uint32_t  biHeight;                                                     
  uint16_t  biPlanes;                                                     
  uint16_t biBitCount;                                                    
  uint32_t biCompression;                                                 
  uint32_t biSizeImage;                                                   
  uint32_t biXPelsPerMeter;                                               
  uint32_t biYPelsPerMeter;                                               
  uint32_t biClrUsed;                                                     
  uint32_t  biClrImportant;                                               
} bmp_header;                                                                   
                                                                                
typedef struct {                                                                
  uint8_t b, g, r;                                                            
} pixel;

typedef struct {
  uint64_t width, height;
  pixel* data;
} image;

image* rotate(image* img);
void save_image(image* new_img, const char* filename);
void load_image(const char* filename, image* img);
#endif