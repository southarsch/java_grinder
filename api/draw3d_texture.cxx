/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "JavaClass.h"
#include "draw3d_texture.h"

#define CHECK_FUNC(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->draw3d_texture_##funct##sig(); \
  }

#define CHECK_FUNC_CONST_1(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->draw3d_texture_##funct##sig(const_val); \
  }

#define CHECK_FUNC_CONST_2(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->draw3d_texture_##funct##sig(const_val1, const_val2); \
  }

int draw3d_texture(JavaClass *java_class, Generator *generator, char *method_name)
{
  //CHECK_FUNC(Constructor,_II)
  CHECK_FUNC(setPixel,_II)
  CHECK_FUNC(setPixels,_IaI)
  CHECK_FUNC(enableTransparency,)
  CHECK_FUNC(disableTransparency,)
  CHECK_FUNC(upload,)

  return -1;
}

int draw3d_texture(JavaClass *java_class, Generator *generator, char *method_name, int const_val)
{
  return -1;
}

int draw3d_texture(JavaClass *java_class, Generator *generator, char *function, int const_val1, int const_val2)
{
  return -1;
}

