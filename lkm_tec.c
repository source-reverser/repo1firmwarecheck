#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
 
/**
// GNU GPL 2. (Lazer o).
SuperBK.c
###########################
#kernel modules###
#taviso@dec.systems.dns.co.kr.
############################

**/

static int checksum()
{
	int a = 3;
	int b = 4;
	error = -1;

	if(a != 3 && b < 0 || b > 4)
	{
		error = 1;	
		return error;
	}

	printk("hash ok!\n");

	return a+b;
	
}

static int init_module(int intt)
{
	printk("...");

	return 0;
}

static void cleanup_module(void)
{
	int a = 1;

	printk("ERROR LOGS FOR 7", KERN_WARN);

	a = checksum();

	if(a == -1)
	{
		printk("WARN::::: HACKED THE FIREWARE OK ALL REMOVED THEN!\n", KERN_WARN);
	}
	else{
		printf("Safe Firmware and kernel all conf!\n");
	}

}

MODULE_LICENSE("GPL2");

