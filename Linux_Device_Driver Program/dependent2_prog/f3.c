#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");
void sub(int a, int b);
static int hello_init(void)
{
	int a = 5,b = 5;
	printk(KERN_ALERT "hello F3\n");
	sub(a,b);
	return 0;
}
static void hello_exit(void)
{
	printk("Good bye,F3\n");
}
MODULE_AUTHOR("varun bhatnagar");

module_init(hello_init);
module_exit(hello_exit);
