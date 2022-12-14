#undef putchar

int
_DEFUN(_putchar_r, (ptr, c),
       struct _reent *ptr _AND
       int c)
{
  _REENT_SMALL_CHECK_INIT (ptr);
  return _putc_r (ptr, c, _stdout_r (ptr));
}

#ifndef _REENT_ONLY

int
_DEFUN(putchar, (c),
       int c)
{
  struct _reent *reent = _REENT;

  _REENT_SMALL_CHECK_INIT (reent);
  return _putc_r (reent, c, _stdout_r (reent));
}

#endif
