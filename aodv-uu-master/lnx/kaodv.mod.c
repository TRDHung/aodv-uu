#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x91791dcd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8733c9e1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc01cf848, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xe1af423b, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xd2e1b21e, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xf842e59e, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x3babb0a1, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe71cbe4e, __VMLINUX_SYMBOL_STR(in_dev_finish_destroy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbe64c15, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63ebf3f1, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x7f658e80, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xd1453b06, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xcc865528, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0x788bc46a, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2378b4f3, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x71e0b32f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe903b8ab, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x6ebb3bd3, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e2317f4, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0x20705009, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5c3edd59, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x1168188f, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x8eb9ba7, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0x82e4e92a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xfdee7d42, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xf37260ab, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x32eeaded, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9004a1c8, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x617a2abe, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x9c8f0e1, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x289d647f, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x988eec06, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

