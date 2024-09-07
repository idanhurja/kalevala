#include <linux/kernel.h>
#include <linux/module.h>

/*
Wellcome to 
 _         _                 _       
| | ____ _| | _____   ____ _| | __ _ 
| |/ / _` | |/ _ \ \ / / _` | |/ _` |
|   < (_| | |  __/\ V / (_| | | (_| |
|_|\_\__,_|_|\___| \_/ \__,_|_|\__,_|


This file can be used as a template for kernel related challanges in Kalevala-dojo


Copy /challenge/kalevala.c as /home/hacker/kalevala.c
Then run:
 python /challange/build_kalevala
as a result you should have:
/home/hacker/kalevala.ko

If you now run in vm /challenge/level01
it should print to vmlog:
[  161.192735] Init of template .ko module completed
[  161.238460] cleanup of template .ko module completed

For later levels copy following files to /home/hacker
/challenge/build_kalevala
/challenge/kalevala.c
I decided not to keep them in /(challaneg folder in later levels,
because some clever hacker might find some nonintended solution for misusing them.
*/

MODULE_LICENSE("GPL"); 
  
int init_module(void) 
{ 
    printk(KERN_INFO "Init of template .ko module completed\n");
    return 0;
} 
  
void cleanup_module(void) 
{ 
    printk(KERN_INFO "cleanup of template .ko module completed\n");
} 
