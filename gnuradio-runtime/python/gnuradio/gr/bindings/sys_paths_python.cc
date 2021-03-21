/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(sys_paths.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(d612f4abb40047c64395b4177ff3ae1f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/sys_paths.h>
// pydoc.h is automatically generated in the build directory
#include <sys_paths_pydoc.h>

void bind_sys_paths(py::module& m)
{


    m.def("tmp_path", &::gr::tmp_path, D(tmp_path));


    m.def("appdata_path", &::gr::appdata_path, D(appdata_path));


    m.def("userconf_path", &::gr::userconf_path, D(userconf_path));
}