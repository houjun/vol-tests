/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "vol_datatype_test_parallel.h"



/*
 * The array of parallel datatype tests to be performed.
 */
static int (*par_datatype_tests[])(void) = {
    NULL
};

int
vol_datatype_test_parallel(void)
{
    size_t i;
    int    nerrors;

    HDprintf("**********************************************\n");
    HDprintf("*                                            *\n");
    HDprintf("*        VOL Parallel Datatype Tests         *\n");
    HDprintf("*                                            *\n");
    HDprintf("**********************************************\n\n");

    for (i = 0, nerrors = 0; i < ARRAY_LENGTH(par_datatype_tests); i++) {
        nerrors += (*par_datatype_tests[i])() ? 1 : 0;
    }

    HDprintf("\n");

    return nerrors;
}
