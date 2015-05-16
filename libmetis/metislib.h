/*
 * Copyright 1997, Regents of the University of Minnesota
 *
 * metis.h
 *
 * This file includes all necessary header files
 *
 * Started 8/27/94
 * George
 *
 * $Id: metislib.h 10655 2011-08-02 17:38:11Z benjamin $
 *
 * Modified by Jack Poulson on 05/16/2015.
 *
 * Copyright Jack Poulson, 2015.
 * All rights reserved.
 */

#ifndef _LIBMETIS_METISLIB_H_
#define _LIBMETIS_METISLIB_H_

#include <GKlib.h>

#if defined(ENABLE_OPENMP)
  #include <omp.h>
#endif

#include <metis.h>
#include <rename.h>
#include <gklib_defs.h>

#include <defs.h>
#include <struct.h>
#include <macros.h>
#include <proto.h>

#endif
