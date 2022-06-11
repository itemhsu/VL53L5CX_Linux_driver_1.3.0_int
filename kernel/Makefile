obj-m+= stmvl53l5cx.o
stmvl53l5cx-objs+= stmvl53l5cx_module.o stmvl53l5cx_i2c.o
all :
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean :
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
dtb:
	sudo rm -f /boot/overlays/stmvl53l5cx.dtbo
	dtc -I dts -O dtb -o stmvl53l5cx.dtbo stmvl53l5cx.dts
	sudo cp stmvl53l5cx.dtbo /boot/overlays/stmvl53l5cx.dtbo
insert :
	sudo insmod stmvl53l5cx.ko
remove :
	sudo rmmod stmvl53l5cx
install:
	sudo cp ~/VL53L5CX_Linux_driver_1.3.0/kernel/stmvl53l5cx.ko /lib/modules/5.10.103-v8+/kernel/drivers/i2c
	sudo depmod -a
	sudo modprobe stmvl53l5cx

