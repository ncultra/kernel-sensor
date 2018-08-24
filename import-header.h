#ifndef __IMPORT_HEADER_
#define __IMPORT_HEADER_


#define IMPORT_SYMBOL_VALUE_FOR_sys_close (0xffffffff81281570UL)
#define IMPORT_SYMBOL_VALUE_FOR_sys_open (0xffffffff81283320UL)
#define IMPORT_SYMBOL_VALUE_FOR_vfs_read (0xffffffff81285950UL)
#define IMPORT_SYMBOL_VALUE_FOR_vfs_write (0xffffffff81285d40UL)
#define IMPORT_SYMBOL_VALUE_FOR_get_files_struct (0xffffffff812a63e0UL)
#define IMPORT_SYMBOL_VALUE_FOR_put_files_struct (0xffffffff812a6410UL)
#define IMPORT_SYMBOL(name) \
    static typeof(&name) IMPORTED(name) __attribute__((unused)) = (typeof(&name))IMPORT_SYMBOL_VALUE_FOR_ ## name
#define IMPORTED(name) __i__ ## name


IMPORT_SYMBOL(get_files_struct);
IMPORT_SYMBOL(put_files_struct);

IMPORT_SYMBOL(sys_open);
IMPORT_SYMBOL(sys_close);
IMPORT_SYMBOL(vfs_read);
IMPORT_SYMBOL(vfs_write);



#endif /* __IMPORT_HEADER_ */
