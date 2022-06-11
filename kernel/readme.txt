make

insmod stmvl53l5cx.ko 
sudo dtoverlay stmvl53l5cx

pi@raspberrypi:~/VL53L5CX_Linux_driver_1.3.0/kernel $ sudo dtoverlay -v stmvl53l5cx
DTOVERLAY[debug]: using platform 'bcm2711'
DTOVERLAY[debug]: overlay map loaded
run_cmd: which dtoverlay-pre >/dev/null 2>&1 && dtoverlay-pre
DTOVERLAY[debug]: loading file '/boot/overlays/stmvl53l5cx.dtbo'
DTOVERLAY[debug]: wrote 409 bytes to '/tmp/.dtoverlays/0_stmvl53l5cx.dtbo'
DTOVERLAY[debug]: wrote 409 bytes to '/sys/kernel/config/device-tree/overlays/0_stmvl53l5cx/dtbo'
run_cmd: which dtoverlay-post >/dev/null 2>&1 && dtoverlay-post


pi@raspberrypi:/proc/device-tree/soc/i2c@7e804000/stmvl53l5cx $ more *
compatible::::::::::::::st,stmvl53l5cx
name::::::::::::::stmvl53l5cx
reg::::::::::::::)
status::::::::::::::okay

#1
philon@rpi:~/modules $ sudo insmod stmvl53l5cx.ko 
#2
philon@rpi:~/modules $ sudo dtoverlay stmvl53l5cx.dtbo
#3

pi@raspberrypi:/sys/devices/virtual/misc/stmvl53l5cx $ cat *
10:57
cat: power: Is a directory
cat: subsystem: Is a directory
MAJOR=10
MINOR=57
DEVNAME=stmvl53l5cx
DEVMODE=0444

pi@raspberrypi:~/VL53L5CX_Linux_driver_1.3.0/kernel $ modinfo stmvl53l5cx.ko
filename:       /home/pi/VL53L5CX_Linux_driver_1.3.0/kernel/stmvl53l5cx.ko
license:        GPL
srcversion:     49511D121ACAC8A06484A5E
alias:          i2c:stmvl53l5cx
alias:          of:N*T*Cst,stmvl53l5cxC*
alias:          of:N*T*Cst,stmvl53l5cx
depends:        
name:           stmvl53l5cx
vermagic:       5.10.103-v8+ SMP preempt mod_unload modversions aarch64
parm:           intr_gpio_nb:select gpio number to use for vl53l5 interrupt (int)


pi@raspberrypi:~ $ dmesg | grep stm
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 25 jiffies.
[    6.350248] stmvl53l5cx: loading out-of-tree module taints kernel.
[    6.351200] stmvl53l5cx: module init
[    6.351372] stmvl53l5cx: probing i2c
[    6.355830] stmvl53l5cx: device_id : 0xf0. revision_id : 0x2

pi@raspberrypi:~ $ dmesg | grep stm
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 25 jiffies.
[    6.751583] stmvl53l5cx: loading out-of-tree module taints kernel.
[    6.752772] stmvl53l5cx: module init
[    6.752946] stmvl53l5cx: probing i2c
[    6.756853] stmvl53l5cx: device_id : 0xf0. revision_id : 0x2
[    6.765224] stmvl53l5cx: Registered IRQ handler, GPIO = 21, st_tof_irq_num = 69

