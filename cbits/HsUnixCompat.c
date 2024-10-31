#include "HsUnixCompat.h"

#ifdef SOLARIS
#include <sys/mkdev.h>
#elif defined(__linux__) || defined(__GNU__)
#include <sys/sysmacros.h>
#endif

unsigned int unix_major(dev_t dev)
{
  return 0; //major(dev);
}

unsigned int unix_minor(dev_t dev)
{
  return 0; //minor(dev);
}

dev_t unix_makedev(unsigned int maj, unsigned int min)
{
  return 0; //makedev(maj, min);
}
