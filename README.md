# state system call 

struct stat
{
  mode_t         st_mode;
  ino_t          st_ino;
  dev_t          st_dev;
  dev_t          st_rdev;
  nlink_t        st_nlink;
  uid_t          st_uid;
  gid_t          st_gid;
  off_t          st_size;
  struct timspec st_atim;
  struct timspec st_mtim;
  struct timspec st_ctim;
  blksize_t      st_blksize;
  blkcnt_t       st_blocks;
};

![image](https://user-images.githubusercontent.com/7072483/206114141-06565242-ad8d-4c66-bd5f-8ee66a6a2e9f.png)


int stat(const char *path, struct stat *buf)
