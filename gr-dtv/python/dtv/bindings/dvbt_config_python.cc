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
/* BINDTOOL_HEADER_FILE(dvbt_config.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1e8c8ddd5673aee22452fdba41394024)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt_config.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt_config_pydoc.h>

void bind_dvbt_config(py::module& m)
{


    py::enum_<::gr::dtv::dvbt_hierarchy_t>(m, "dvbt_hierarchy_t")
        .value("NH", ::gr::dtv::NH)         // 0
        .value("ALPHA1", ::gr::dtv::ALPHA1) // 1
        .value("ALPHA2", ::gr::dtv::ALPHA2) // 2
        .value("ALPHA4", ::gr::dtv::ALPHA4) // 3
        .export_values();
    py::enum_<::gr::dtv::dvbt_transmission_mode_t>(m, "dvbt_transmission_mode_t")
        .value("T2k", ::gr::dtv::T2k) // 0
        .value("T8k", ::gr::dtv::T8k) // 1
        .export_values();

    py::implicitly_convertible<int, gr::dtv::dvbt_hierarchy_t>();
    py::implicitly_convertible<int, gr::dtv::dvbt_transmission_mode_t>();
}