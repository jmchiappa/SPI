#include "dma.h"

DMA_HandleTypeDef hdma_spi1_tx;
SPI_HandleTypeDef *_hspi1;


#if defined(STM32L476xx)
# include "STM32L476/dma.c.opt"
#elif defined(STM32WB55xx)
# include "STM32WB55/dma.c.opt"
// #elif defined(STM32L432xx)
// # include "l432.init"
#else
# error "from SPI library : your STM32 model is not supported for now. Please consider to upgrade the library with your STM32 model"
#endif
