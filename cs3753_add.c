#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int a, int b, int* c) {
   int temp = 0;
   printk(KERN_ALERT "Value for a is %d\n", a);
   printk(KERN_ALERT "Value for b is %d\n", b); 
   temp = a + b;
   copy_to_user(c, &temp, 4);
   printk(KERN_ALERT "Result of a+b is %d\n", temp);
   return 0;
}
 
