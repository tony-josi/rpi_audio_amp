#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <getopt.h>
#include <fcntl.h>
#include <time.h>
#include <sys/ioctl.h>
#include <linux/ioctl.h>
#include <sys/stat.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>

#define _T_SPI_CPHA_CPOL       0
#define _T_SPI_MODE            (SPI_NO_CS | SPI_RX_OCTAL | _T_SPI_CPHA_CPOL)
#define _T_SPI_DATA_RATE       (1000000U)
#define _T_SPI_NO_OF_BITS      (8)
#define _T_SPI_DEVICE_NAME      "/dev/spidev0.1"

static uint32_t     _spi__Mode          = _T_SPI_MODE;
static uint32_t     _spi__DataRate      = _T_SPI_DATA_RATE;
static uint8_t      _spi__NoOfBits      = _T_SPI_NO_OF_BITS;

static int SPI_HAL_ReceiveData(int spi_fd, uint8_t *rx_buff, size_t data_len);

int main() {

    int spi_Handle;
    spi_Handle = open(_T_SPI_DEVICE_NAME, O_RDWR);
    if(spi_Handle < 0) {
        printf("Error opening device\n");
        return 0;
    }

    int ret_Code = 0;
    ret_Code = ioctl(spi_Handle, SPI_IOC_WR_MODE32, )

    return 0;
}