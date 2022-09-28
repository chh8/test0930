void static_p(void)
{
  const char *str="abcde";
  *str="cdef";
 free(str); 
}