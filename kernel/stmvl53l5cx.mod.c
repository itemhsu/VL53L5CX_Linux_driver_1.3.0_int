#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4731d9ac, "module_layout" },
	{ 0x615daf82, "kmalloc_caches" },
	{ 0x404c211a, "param_ops_int" },
	{ 0x93ff4e62, "i2c_del_driver" },
	{ 0x7e6e6337, "i2c_transfer" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9b1d1488, "gpio_to_desc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x632059e4, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x858a3321, "gpiod_direction_input" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb3372cc, "i2c_register_driver" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9f49dcc4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x68ed7a09, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x10968d0c, "gpiod_to_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x90bbf41b, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmvl53l5cx");
MODULE_ALIAS("of:N*T*Cst,stmvl53l5cxC*");
MODULE_ALIAS("i2c:stmvl53l5cx");

MODULE_INFO(srcversion, "0BDCF3E9F7D5D044CE2C39D");
